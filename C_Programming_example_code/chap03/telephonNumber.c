/*
 * telephoneNumber.c
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

#define DIVISOR 100

int main(){
    
    int zipnumber, mainnumber, number, temporary;

    printf( "Proszę podaj numer telefonu (XX) XXX-XXXX): " );
    scanf( " (%d )%d -%d", &zipnumber, &mainnumber, &number );

    temporary = number / DIVISOR;
    printf( "Podany numer: 0-%d %d-%d-%d \n", 
        zipnumber, mainnumber, temporary, number - (temporary * DIVISOR) );
    
    return 0;
}