/* Copyright (C) 1995 DJ Delorie, see COPYING.DJ for details */
/*
 * D_COMMIT.C.
 *
 * Written by Peter Sulyok 1995 <sulyok@math.klte.hu>.
 *
 * This file is distributed WITHOUT ANY WARRANTY; without even the implied
 * warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 */

#include <libc/dosio.h>
#include <errno.h>
#include <dos.h>

unsigned int _dos_commit(int handle)
{
 _dosemu_flush(handle);
 return 0;
}
