/* SPDX-License-Identifier: GPL-2.0 */
/*
 * This header provides macros for the common LEDs device tree bindings.
 *
 * Copyright (C) 2015, Samsung Electronics Co., Ltd.
 * Author: Jacek Anaszewski <j.anaszewski@samsung.com>
 *
 * Copyright (C) 2019 Jacek Anaszewski <jacek.anaszewski@gmail.com>
 */

#ifndef __DT_BINDINGS_LEDS_H
#define __DT_BINDINGS_LEDS_H

/* External trigger type */
#define LEDS_TRIG_TYPE_EDGE	0
#define LEDS_TRIG_TYPE_LEVEL	1

/* Boost modes */
#define LEDS_BOOST_OFF		0
#define LEDS_BOOST_ADAPTIVE	1
#define LEDS_BOOST_FIXED	2

/* Standard LED colors */
#define LED_COLOR_ID_WHITE	0
#define LED_COLOR_ID_RED	1
#define LED_COLOR_ID_GREEN	2
#define LED_COLOR_ID_BLUE	3
#define LED_COLOR_ID_AMBER	4
#define LED_COLOR_ID_VIOLET	5
#define LED_COLOR_ID_YELLOW	6
#define LED_COLOR_ID_IR		7
#define LED_COLOR_ID_MAX	8

/* Standard LED functions */
#define LED_FUNCTION_ACTIVITY "activity"
#define LED_FUNCTION_ALARM "alarm"
#define LED_FUNCTION_BACKLIGHT "backlight"
#define LED_FUNCTION_BLUETOOTH "bluetooth"
#define LED_FUNCTION_BOOT "boot"
#define LED_FUNCTION_CPU "cpu"
#define LED_FUNCTION_CAPSLOCK "capslock"
#define LED_FUNCTION_CHARGING "charging"
#define LED_FUNCTION_DEBUG "debug"
#define LED_FUNCTION_DISK "disk"
#define LED_FUNCTION_DISK_ACTIVITY "disk-activity"
#define LED_FUNCTION_DISK_ERR "disk-err"
#define LED_FUNCTION_DISK_READ "disk-read"
#define LED_FUNCTION_DISK_WRITE "disk-write"
#define LED_FUNCTION_FAULT "fault"
#define LED_FUNCTION_FLASH "flash"
#define LED_FUNCTION_HEARTBEAT "heartbeat"
#define LED_FUNCTION_INDICATOR "indicator"
#define LED_FUNCTION_KBD_BACKLIGHT "kbd_backlight"
#define LED_FUNCTION_LAN "lan"
#define LED_FUNCTION_MAIL "mail"
#define LED_FUNCTION_MTD "mtd"
#define LED_FUNCTION_MICMUTE "micmute"
#define LED_FUNCTION_MUTE "mute"
#define LED_FUNCTION_NUMLOCK "numlock"
#define LED_FUNCTION_PANIC "panic"
#define LED_FUNCTION_PLAYER1 "player-1"
#define LED_FUNCTION_PLAYER2 "player-2"
#define LED_FUNCTION_PLAYER3 "player-3"
#define LED_FUNCTION_PLAYER4 "player-4"
#define LED_FUNCTION_PLAYER5 "player-5"
#define LED_FUNCTION_PROGRAMMING "programming"
#define LED_FUNCTION_POWER "power"
#define LED_FUNCTION_RX "rx"
#define LED_FUNCTION_SD "sd"
#define LED_FUNCTION_SCROLLLOCK "scrolllock"
#define LED_FUNCTION_STANDBY "standby"
#define LED_FUNCTION_STATUS "status"
#define LED_FUNCTION_TORCH "torch"
#define LED_FUNCTION_TX "tx"
#define LED_FUNCTION_USB "usb"
#define LED_FUNCTION_WAN "wan"
#define LED_FUNCTION_WLAN "wlan"
#define LED_FUNCTION_WPS "wps"

#endif /* __DT_BINDINGS_LEDS_H */
