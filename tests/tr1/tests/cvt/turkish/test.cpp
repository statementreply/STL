// Copyright (c) Microsoft Corporation.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception

#include "tdefs.h"
#include <cvt/turkish>

#define NCHARS   0x100
#define MYWC_MAX 0xffff
#define MYFILE   "turkish"
#define MYNAME   stdext::cvt::codecvt_turkish<wchar_t>
#include <cvt_xtest.h>
