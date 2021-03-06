DESCRIPTION = "Linux Kernel"
SECTION = "kernel"
LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://${S}/COPYING;md5=bbea815ee2795b2f4230826c0c6b8814"

inherit kernel
require recipes-kernel/linux/linux-yocto.inc

LINUX_VERSION_EXTENSION = ""

PV = "${LINUX_VERSION}+git${SRCPV}"

KCONFIG_MODE="--alldefconfig"

KBUILD_DEFCONFIG_qemuriscv32 = "rv32_defconfig"
KBUILD_DEFCONFIG_qemuriscv64 = "defconfig"
KBUILD_DEFCONFIG_lc-mpfs = "defconfig"
KBUILD_DEFCONFIG_mpfs = "defconfig"

COMPATIBLE_MACHINE = "(qemuriscv32|qemuriscv64|lc-mpfs|mpfs)"

KERNEL_FEATURES_remove = "features/debug/printk.scc"
KERNEL_FEATURES_remove = "features/kernel-sample/kernel-sample.scc"
