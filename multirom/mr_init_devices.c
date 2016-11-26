#include <stdlib.h>

// These are paths to folders in /sys which contain "uevent" file
// need to init this device.
// MultiROM needs to init framebuffer, mmc blocks, input devices,
// some ADB-related stuff and USB drives, if OTG is supported
// You can use * at the end to init this folder and all its subfolders
const char *mr_init_devices[] =
{

    "/sys/class/graphics/fb0",
    "/sys/class/graphics/fb1",
    "/sys/devices/virtual/graphics/fb0",
    "/sys/devices/virtual/graphics/fb1",

    "/sys/block/mmcblk0*",


    "/sys/block/mmcblk0/mmcblk0p14", //boot
    "/sys/block/mmcblk0/mmcblk0p48", //data

     "/sys/block/mmcblk0/mmcblk0p16", //system
    "/sys/block/mmcblk0/mmcblk0p39", //cache

    "/sys/block/mmcblk0/mmcblk0p40", // persist
    "/sys/block/mmcblk0/mmcblk0p23", // modem

    "/sys/bus*",
    "/sys/devices*",
    "/sys/bus/mmc*",
    "/sys/bus/mmc/drivers/mmcblk",
    "/sys/bus/mmc/drivers/mmcblk*",
    "/sys/module/sdhci",
    "/sys/module/sdhci*",
    "/sys/module/sdhci_msm",
    "/sys/module/sdhci_msm*",
    "/sys/module/mmc_core",
    "/sys/module/mmcblk",

    // looks like storage to me
    "/sys/devices/soc/7464900.sdhci/mmc_host*",
    "/sys/devices/soc/74a4900.sdhci/mmc_host*",

    // for input
    "/sys/devices/virtual/input*",
    "/sys/devices/virtual/input/input0",
    "/sys/devices/virtual/misc/uinput",
    "/sys/devices/soc/soc:gpio_keys/input/input5*",
    "/sys/bus/platform/devices/soc:gpio_keys*"
    "/sys/devices/virtual/misc/uinput",
    "/sys/devices/virtual/misc/uinput/*",
    "/sys/devices/soc/soc:gpio_keys*",
    // soft i2c
    "/sys/devices/virtual/input*",
    "/sys/devices/virtual/input/input1",
    "/sys/devices/virtual/input/input2",
    "/sys/devices/virtual/input/input3",
    "/sys/devices/virtual/input/input4",

    // for adb
    "/sys/class/tty/ptmx",
    "/sys/class/misc/android_adb",
    "/sys/class/android_usb/android0*",
    "/sys/class/android_usb/android0/f_adb",
    "/sys/bus/platform/drivers/android_usb",
    "/sys/bus/usb",

    // USB Drive
    "/sys/devices/soc/6a00000.ssusb/6a00000.dwc3/xhci-hcd*",
    "/sys/bus/platform/drivers/xhci-hcd*",
	"/sys/block/sda/sda1",


    // for qualcomm overlay - /dev/ion
    "/sys/devices/virtual/misc/ion",

    NULL
};
