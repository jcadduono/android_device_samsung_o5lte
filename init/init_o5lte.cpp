/*
   Copyright (c) 2013, The Linux Foundation. All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are
   met:
    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above
      copyright notice, this list of conditions and the following
      disclaimer in the documentation and/or other materials provided
      with the distribution.
    * Neither the name of The Linux Foundation nor the names of its
      contributors may be used to endorse or promote products derived
      from this software without specific prior written permission.

   THIS SOFTWARE IS PROVIDED "AS IS" AND ANY EXPRESS OR IMPLIED
   WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
   MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT
   ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS
   BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
   CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
   SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
   BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
   WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
   OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN
   IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include <stdlib.h>

#include "vendor_init.h"
#include "property_service.h"
#include "util.h"

void vendor_load_properties()
{
	char bootloader[PROP_VALUE_MAX];

	property_get("ro.bootloader", bootloader);

	if (strstr(bootloader, "G550FY")) {
		/* o5lteswa */
		property_set("ro.product.model", "SM-G550FY");
		property_set("ro.product.name", "o5lteswa");
	} else if (strstr(bootloader, "G550V")) {
		/* o5ltevzw */
		property_set("ro.product.model", "SM-G550V");
		property_set("ro.product.name", "o5ltevzw");
	} else if (strstr(bootloader, "G550T1")) {
		/* o5ltemtr */
		property_set("ro.product.model", "SM-G550T1");
		property_set("ro.product.name", "o5ltemtr");
	} else if (strstr(bootloader, "G550T")) {
		/* o5ltetmo */
		property_set("ro.product.model", "SM-G550T");
		property_set("ro.product.name", "o5ltetmo");
	} else if (strstr(bootloader, "G5500")) {
		/* o5ltezc */
		property_set("ro.product.model", "SM-G5500");
		property_set("ro.product.name", "o5ltezc");
	} else {
		/* all other variants become o5ltecan */
		property_set("ro.product.model", "SM-G550W");
		property_set("ro.product.name", "o5ltecan");
	}
	property_set("ro.product.device", "o5lte");
}
