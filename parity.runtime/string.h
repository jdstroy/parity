/****************************************************************\
*                                                                *
* Copyright (C) 2007 by Markus Duft <markus.duft@salomon.at>     *
*                                                                *
* This file is part of parity.                                   *
*                                                                *
* parity is free software: you can redistribute it and/or modify *
* it under the terms of the GNU Lesser General Public License as *
* published by the Free Software Foundation, either version 3 of *
* the License, or (at your option) any later version.            *
*                                                                *
* parity is distributed in the hope that it will be useful,      *
* but WITHOUT ANY WARRANTY; without even the implied warranty of *
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the  *
* GNU Lesser General Public License for more details.            *
*                                                                *
* You should have received a copy of the GNU Lesser General      *
* Public License along with parity. If not,                      *
* see <http://www.gnu.org/licenses/>.                            *
*                                                                *
\****************************************************************/

#ifndef __PCRT_STRING_H__
#define __PCRT_STRING_H__

#include "internal/pcrt.h"

#pragma push_macro("__STDC__")
#  ifdef __STDC__
#    undef __STDC__
#  endif
#  include RUNTIME_INC(String.h)
#pragma pop_macro("__STDC__")

PCRT_BEGIN_C

#pragma push_macro("strcasecmp")
#pragma push_macro("strncasecmp")

#undef strcasecmp
#undef strncasecmp

static PCRT_INLINE int strcasecmp(const char* s1, const char* s2) { return _stricmp(s1, s2); }
static PCRT_INLINE int strncasecmp(const char* s1, const char* s2, size_t l) { return _strnicmp(s1, s2, l); }

#pragma pop_macro("strcasecmp")
#pragma pop_macro("strncasecmp")

PCRT_END_C

#endif

