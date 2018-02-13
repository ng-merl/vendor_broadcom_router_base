/*  *********************************************************************
    *  Broadcom Common Firmware Environment (CFE)
    *  
    *  BSP Configuration file			File: bsp_config.h
    *  
    *  This module contains global parameters and conditional
    *  compilation settings for building CFE.
    *  
    *  Author:  Mitch Lichtenberg (mpl@broadcom.com)
    *  
    *********************************************************************  
    *
    *  Copyright 2000,2001,2002,2003
    *  Broadcom Corporation. All rights reserved.
    *  
    *  This software is furnished under license and may be used and 
    *  copied only in accordance with the following terms and 
    *  conditions.  Subject to these conditions, you may download, 
    *  copy, install, use, modify and distribute modified or unmodified 
    *  copies of this software in source and/or binary form.  No title 
    *  or ownership is transferred hereby.
    *  
    *  1) Any source code used, modified or distributed must reproduce 
    *     and retain this copyright notice and list of conditions 
    *     as they appear in the source file.
    *  
    *  2) No right is granted to use any trade name, trademark, or 
    *     logo of Broadcom Corporation.  The "Broadcom Corporation" 
    *     name may not be used to endorse or promote products derived 
    *     from this software without the prior written permission of 
    *     Broadcom Corporation.
    *  
    *  3) THIS SOFTWARE IS PROVIDED "AS-IS" AND ANY EXPRESS OR
    *     IMPLIED WARRANTIES, INCLUDING BUT NOT LIMITED TO, ANY IMPLIED
    *     WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR 
    *     PURPOSE, OR NON-INFRINGEMENT ARE DISCLAIMED. IN NO EVENT 
    *     SHALL BROADCOM BE LIABLE FOR ANY DAMAGES WHATSOEVER, AND IN 
    *     PARTICULAR, BROADCOM SHALL NOT BE LIABLE FOR DIRECT, INDIRECT,
    *     INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES 
    *     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE
    *     GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
    *     BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY 
    *     OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR 
    *     TORT (INCLUDING NEGLIGENCE OR OTHERWISE), EVEN IF ADVISED OF 
    *     THE POSSIBILITY OF SUCH DAMAGE.
    ********************************************************************* */



#ifdef _FUNCSIM_
#define CFG_CPU_SPEED		500000 /* 500KHz for the func simulator */
#else
#define CFG_CPU_SPEED		500000000
#endif

#define CFG_INIT_L1		1	/* initialize the L1 cache */
#define CFG_INIT_L2		1	/* initialize the L2 cache */
#define CFG_INIT_DRAM		1	/* initialize DRAM controller */

#define CFG_NETWORK		1	/* define to include network support */

#define CFG_UI			1	/* Define to enable user interface */

#define CFG_MULTI_CPUS		0	/* Define to include multiple CPU support */

#define CFG_HEAP_SIZE	        96	/* heap size in kilobytes */
#define CFG_STACK_SIZE          1024    /* size of runtime stack */
#define CFG_DRAM_ECC		0	/* Turn on to enable ECC */
#define CFG_DRAM_SMBUS_CHANNEL	0	/* SMBus channel for memory SPDs */
#define CFG_DRAM_SMBUS_BASE     0x54	/* starting SMBus device base */
#define CFG_DRAM_SMBUS_NDIMMS   4	/* total number of DIMM slots */

#define CFG_SERIAL_BAUD_RATE	115200	/* normal console speed */

#define CFG_MINIMAL_SIZE	1
