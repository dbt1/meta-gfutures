# hd51 bre2ze4k h7 BSP default settings

SOC_FAMILY = "bcm7251s"

MACHINE_FEATURES = "apm usbhost keyboard vfat ext2 wifi"

##preferred versions
PREFERRED_VERSION_linux-libc-headers = "4.10"
PREFERRED_VERSION_nativesdk-linux-libc-headers = "4.10"

MTD_ROOTFS = "mmcblk0p3"
MTD_KERNEL = "mmcblk0p2"
KERNEL_FILE = "kernel.bin"
ROOTFS_FILE = "rootfs.tar.bz2"

#IMAGE_CLASSES += "hd-emmc_image_single"
#IMAGE_CLASSES += "hd-emmc_image_multi"
IMAGE_CLASSES += "hd-emmc_image_multiboot"

IMAGE_FSTYPES += "hd-emmc"


