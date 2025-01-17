/*
 *  Copyright (c) 2022 Nuvoton Technology Corp.
 *
 * See file CREDITS for list of people who contributed to this
 * project.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston,
 * MA 02111-1307 USA
 */

#ifndef __NPCMX845_TRACE_H_
#define __NPCMX845_TRACE_H_

#include <trace.h>

void trace_ext_printf(const char *fmt, ...) __attribute__ ((format (printf, 1, 2)));
void __attribute__((format(printf, 1, 0))) trace_ext_vprintf(const char *fmt, va_list ap);

#define trace_ext_printf_helper(...) trace_ext_printf(__VA_ARGS__)

#define TMSG(...)   trace_ext_printf(__VA_ARGS__)

#endif
