/*
    PENG - A Permutation Engine
    Copyright (C) 1998-2015 by Klaus-J. Wolf
                               yanestra !at! lab6 !dot! seismic !dot! de

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or   
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of 
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the  
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/


#if AVOID_ALLOCA
#define MALLOC(x) chkmalloc(x)
#define MALLOCA(x) chkmalloc(x)
#define FREE(x) free(x)
#define FREEA(x) free(x)
#else
#define MALLOC(x) chkmalloc(x)
#define MALLOCA(x) alloca(x)
#define FREE(x) free(x)
#define FREEA(x)
#endif


void *chkmalloc(uint32_t x);

int mymemcmp(const void *abuf0, const void *bbuf0, uint32_t sz0);

void memxor(void *dst0, const void *src0, uint32_t sz0);

uint32_t do_padding(void *buf0, uint32_t sz0);

uint32_t countconsecutivezeros(void *buf0, uint32_t sz);

uint32_t byte_reorder32(const char *from_order, const char *to_order, uint32_t from, int bytes);

uint64_t byte_reorder64(const char *from_order, const char *to_order, uint64_t from, int bytes);

void rectify(const char *from_order, const char *to_order, void *ptr, int numbytes);

void quickrepl(char *buf, const char *orig, const char *dest);

const char *quickrepl_dyn(const char *fmt, const char *orig, const char *dest);