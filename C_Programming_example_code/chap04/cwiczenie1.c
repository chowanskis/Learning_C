/*
 * cwiczenie1.c
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

int main() {

    int i, j, k;

    i = 5, j = 3;
    printf( " %d %d \n", i / j, i % j );
    
    i = 2, j = 3;
    printf( " %d \n", ( i + 10 ) % j );
    
    i = 7, j = 8, k = 9;
    printf( " %d \n", ( i + 10 ) % k / j);
    
    i = 1, j = 2, k = 3;
    printf( " %d \n", ( i + 5 ) % ( j + 2) / k);
    
    return 0;
}