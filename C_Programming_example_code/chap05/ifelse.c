/*
 * ifelse.c
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

// Nie koduj tak - to jest nieczytelne szaleństwo!
#include <stdio.h>

int main() {

    int i, j, k, max;
    i = 3, j = 2, k =1;

    if ( i > j )
        if ( i > k )
            max = i;
        else 
            max = k;
    else 
        if ( j > k )
            if ( i > k )
                max = j;
            else 
                max = k;
    
    printf( "%d \n", max );

    return 0;
}