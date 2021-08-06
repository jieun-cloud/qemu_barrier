#!/bin/bash
#QEMU_RUN_OPTION="-m 4096 -smp 1 -enable-kvm -vga cirrus -device nvme,drive=nvme1,serial=foo "

QEMU_RUN_OPTION="-m 4096 -smp 1 -enable-kvm -vga cirrus -nographic -device nvme,drive=nvme1,serial=foo "
QEMU_DIR="./build/x86_64-softmmu"
QEMU_RUN_OPTION+=" -net user,hostfwd=tcp::10025-:22 -net nic"
#QEMU_RUN_OPTION+=" -net user,hostfwd=tcp::10022-:22 -net nic"
#QEMU_RUN_OPTION+="-net nic"
IMG_DIR="/home/jieun/sata/andes_img"

QEMU_IMG1="barrier_hda.img"
QEMU_IMG2="barrier_nvme.img"

sudo ${QEMU_DIR}/qemu-system-x86_64 -hda ${IMG_DIR}/${QEMU_IMG1} -drive file=${IMG_DIR}/${QEMU_IMG2},if=none,id=nvme1 ${QEMU_RUN_OPTION}&
