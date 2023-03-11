/*
 * upc.c
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

// Brak zadania w repozytorium, przepisałem je. 
#include <stdio.h>

int main() {

    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, 
        first_sum, second_sum, total;
    
    printf( "Podaj pierwszą cyfrę kodu: " );
    scanf( "%1d", &d );
    printf( "Podaj pierwszą grupę 5 cyfr kodu: " );
    scanf( "%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5 );
    printf( "Podaj drugą grupę 5 cyfr kodu: " );
    scanf( "%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5 );

    first_sum = d + i2 + i4 + j1 + j3 + j5;
    second_sum = i1 + i3 + i5 + j2 + j4;
    total = 3 * first_sum + second_sum;

    printf( "Cyfra kontrolna: %d \n", 9 - (( total - 1 ) % 10 ));

    return 0;
}