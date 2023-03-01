/*
 * trojznakError.c
 * Copyright 2023 Sławomir Chowański
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 */

#include <stdio.h>

int main(){

    // Uważaj, ??( to trójznak odpowiadający znakowi [ ale 
    // na moim kompilatorze to nie działa. Nie ma napisu Cancel?[Y?N}.
    // warning: trigraph ??( ignored, use -trigraphs to enable [-Wtrigraphs]
    //
    // gcc -trigraphs trojznakError.c
    // Cancel ?[Y/N).

    printf( "Cancel ???(Y/N).\n" );

    return 0;
}