/*
 * Copyright (C) 2015 Mentor Graphics, Inc. All Rights Reserved.
 *
 * The code contained herein is licensed under the GNU General Public
 * License. You may obtain a copy of the GNU General Public License
 * Version 2 or later at the following locations:
 *
 * http://www.opensource.org/licenses/gpl-license.html
 * http://www.gnu.org/copyleft/gpl.html
 */
#ifndef __MXC_ICAP_H__
#define __MXC_ICAP_H__

typedef void (*mxc_icap_handler_t)(int, void *, struct timespec *);

int mxc_request_input_capture(unsigned int chan, mxc_icap_handler_t handler,
			      unsigned long capflags, void *dev_id);
void mxc_free_input_capture(unsigned int chan, void *dev_id);

#endif
