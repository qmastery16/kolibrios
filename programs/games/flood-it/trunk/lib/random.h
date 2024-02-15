/*******************************************************************************

    MenuetOS MineSweeper
    Copyright (C) 2003  Ivan Poddubny

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

*******************************************************************************/

dword generator;  // random number generator - ��� ��������� ��������� �����

:int random(int max)
// get pseudo-random number - �������� ��������������� �����
{
  $rdtsc        // eax & edx
  $xor eax,edx
  $not eax

  EBX = generator;
  $ror ebx,3
  $xor ebx,0xdeadbeef
  EBX += EAX;
  generator = EBX;
  
  EAX += EBX;
  EAX = EAX % max;
  return EAX;
}

:randomize()
// initialize random number generator - ���������������� ��������� ��������� �����
{
  asm
  {
    mov eax,3
    int 0x40
    ror eax,16
  }
  generator = EAX;
}