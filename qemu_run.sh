#!/bin/bash
IMG_DIR="/home/jieun/sata/andes_img"
QEMU_DIR="./build/x86_64-softmmu"
QEMU_RUN_OPTION="-m 4096 -smp 8 -enable-kvm -vga cirrus -device nvme,drive=nvme1,serial=foo"

QEMU_IMG1="barrier_hda.img"
QEMU_IMG2="barrier_nvme.img"
OS_DIR="/home/jieun/Downloads"
OS_IMG="ubuntu-14.04.4-desktop-amd64.iso"

# Create QEMU disk
qemu-img create -f qcow2 ${IMG_DIR}/${QEMU_IMG1} 30G
qemu-img create -f qcow2 ${IMG_DIR}/${QEMU_IMG2} 10G

# Run QEMU-KVM
sudo ${QEMU_DIR}/qemu-system-x86_64 -hda ${IMG_DIR}/${QEMU_IMG1} -drive file=${IMG_DIR}/${QEMU_IMG2},if=none,id=nvme1 -cdrom ${OS_DIR}/${OS_IMG} ${QEMU_RUN_OPTION}
