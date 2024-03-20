/*
 * reg-uart.h
 *
 * Copyright (C) 2015-2018 BeiJing OURS Education Technology Co., Ltd.
 * Copyright (C) 2017 Tangle.Xu. All rights reserved.
 *
 * Official site: http://www.ourselec.com
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, you can access it online at
 * http://www.gnu.org/licenses/gpl-2.0.html.
 *
 * Author: Tangle.Xu <420724072@qq.com>
 * Date: 2017.05
 * Version: v0.1
 *
 */

#ifndef __S5P6818_REG_UART_H__
#define __S5P6818_REG_UART_H__

#define S5P6818_UART0_BASE		(0xC00A1000)
#define S5P6818_UART1_BASE		(0xC00A0000)
#define S5P6818_UART2_BASE		(0xC00A2000)
#define S5P6818_UART3_BASE		(0xC00A3000)
#define S5P6818_UART4_BASE		(0xC006D000)
#define S5P6818_UART5_BASE		(0xC006F000)

#define UART_ULCON	 	 		(0x00)
#define UART_UCON	 	 		(0x04)
#define UART_UFCON	 	 		(0x08)
#define UART_UMCON	 	 		(0x0C)
#define UART_UTRSTAT			(0x10)
#define UART_UERSTAT			(0x14)
#define UART_UFSTAT				(0x18)
#define UART_UMSTAT				(0x1C)
#define UART_UTXH				(0x20)
#define UART_URXH				(0x24)
#define UART_UBRDIV				(0x28)
#define UART_UFRACVAL			(0x2C)
#define UART_UINTP				(0x30)
#define UART_UINTSP				(0x34)
#define UART_UINTM				(0x38)

#define UART_UFSTAT_TXFULL		(1<<24)
#define UART_UFSTAT_RXFULL		(1<<8)
#define UART_UFSTAT_TXCOUNT		(0xFF<<16)
#define UART_UFSTAT_RXCOUNT		(0xFF<<0)
#define UART_UTRSTAT_TXE	  	(1<<2)
#define UART_UTRSTAT_TXFE		(1<<1)
#define UART_UTRSTAT_RXDR		(1<<0)
#define UART_UERSTAT_OVERRUN	(1<<0)
#define UART_UERSTAT_PARITY		(1<<1)
#define UART_UERSTAT_FRAME		(1<<2)
#define UART_UERSTAT_BREAK		(1<<3)
#define UART_UMSTAT_CTS	  		(1<<0)
#define UART_UMSTAT_DCTS		(1<<4)

#endif /* __S5P6818_REG_UART_H__ */
