# Default configuration for mips-softmmu

# Common mips*-softmmu CONFIG defines

CONFIG_ESP=y
CONFIG_VGA_ISA=y
CONFIG_VGA_ISA_MM=y
CONFIG_VGA_CIRRUS=y
CONFIG_VMWARE_VGA=y
CONFIG_SERIAL=y
CONFIG_SERIAL_ISA=y
CONFIG_PARALLEL=y
CONFIG_I8254=y
CONFIG_PCSPK=y
CONFIG_PCKBD=y
CONFIG_FDC=y
CONFIG_ACPI=y
CONFIG_ACPI_X86=y
CONFIG_ACPI_MEMORY_HOTPLUG=y
CONFIG_ACPI_NVDIMM=y
CONFIG_ACPI_CPU_HOTPLUG=y
CONFIG_APM=y
CONFIG_I8257=y
CONFIG_PIIX4=y
CONFIG_IDE_ISA=y
CONFIG_IDE_PIIX=y
CONFIG_NE2000_ISA=y
CONFIG_MIPSNET=y
CONFIG_PFLASH_CFI01=y
CONFIG_I8259=y
CONFIG_MC146818RTC=y
CONFIG_ISA_TESTDEV=y
CONFIG_EMPTY_SLOT=y
CONFIG_MIPS_CPS=y
CONFIG_MIPS_ITU=y
CONFIG_I2C=y
CONFIG_PCI=y
# For now, CONFIG_IDE_CORE requires ISA, so we enable it here
CONFIG_ISA_BUS=y
CONFIG_VIRTIO_PCI=y
CONFIG_VIRTIO=y
CONFIG_USB_UHCI=y
CONFIG_USB_OHCI=y
CONFIG_USB_EHCI=y
CONFIG_USB_XHCI=y
CONFIG_USB_XHCI_NEC=y
CONFIG_NE2000_PCI=y
CONFIG_EEPRO100_PCI=y
CONFIG_PCNET_PCI=y
CONFIG_PCNET_COMMON=y
CONFIG_AC97=y
CONFIG_HDA=y
CONFIG_ES1370=y
CONFIG_LSI_SCSI_PCI=y
CONFIG_VMW_PVSCSI_SCSI_PCI=y
CONFIG_MEGASAS_SCSI_PCI=y
CONFIG_MPTSAS_SCSI_PCI=y
CONFIG_RTL8139_PCI=y
CONFIG_E1000_PCI=y
CONFIG_E1000E_PCI=y
CONFIG_IDE_CORE=y
CONFIG_IDE_QDEV=y
CONFIG_IDE_PCI=y
CONFIG_AHCI=y
CONFIG_ESP=y
CONFIG_ESP_PCI=y
CONFIG_SERIAL=y
CONFIG_SERIAL_ISA=y
CONFIG_SERIAL_PCI=y
CONFIG_CAN_BUS=y
CONFIG_CAN_SJA1000=y
CONFIG_CAN_PCI=y
CONFIG_IPACK=y
CONFIG_WDT_IB6300ESB=y
CONFIG_PCI_TESTDEV=y
CONFIG_NVME_PCI=y
CONFIG_SD=y
CONFIG_SDHCI=y
CONFIG_EDU=y
CONFIG_VGA=y
CONFIG_VGA_PCI=y
CONFIG_IVSHMEM_DEVICE=$(CONFIG_IVSHMEM)
CONFIG_ROCKER=y
CONFIG_VHOST_USER_SCSI=$(call land,$(CONFIG_VHOST_USER),$(CONFIG_LINUX))
CONFIG_VHOST_USER_BLK=$(call land,$(CONFIG_VHOST_USER),$(CONFIG_LINUX))
CONFIG_SB16=y
CONFIG_ADLIB=y
CONFIG_GUS=y
CONFIG_CS4231A=y
CONFIG_USB=y
CONFIG_USB_TABLET_WACOM=y
CONFIG_USB_STORAGE_BOT=y
CONFIG_USB_STORAGE_UAS=y
CONFIG_USB_STORAGE_MTP=y
CONFIG_USB_SMARTCARD=y
CONFIG_USB_AUDIO=y
CONFIG_USB_SERIAL=y
CONFIG_USB_NETWORK=y
CONFIG_USB_BLUETOOTH=y
