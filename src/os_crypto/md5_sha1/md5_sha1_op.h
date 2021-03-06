/* @(#) $Id: ./src/os_crypto/md5_sha1/md5_sha1_op.h, 2011/09/08 dcid Exp $
 */

/* Copyright (C) 2009 Trend Micro Inc.
 * All right reserved.
 *
 * This program is a free software; you can redistribute it
 * and/or modify it under the terms of the GNU General Public
 * License (version 2) as published by the FSF - Free Software
 * Foundation
 */

/* OS_crypto/md5 Library.
 * APIs for many crypto operations.
 */

#ifndef __MD5SHA1_OP_H
#define __MD5SHA1_OP_H


int OS_MD5_SHA1_File(char *fname, char *prefilter_cmd, char *md5output, char *sha1output);


#endif

/* EOF */
