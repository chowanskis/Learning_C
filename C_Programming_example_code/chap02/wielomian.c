/*
 * wielomian.c
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

 // 3x5 + 2x4 -5x3 -x2 +7x - 6

#include <stdio.h>

#define FACTOR 4.0f / 3.0f

int main() {

    int a = 2;

    int x5 = a * a * a * a * a;
    int x4 = a * a * a * a;
    int x3 = a * a * a;
    int x2 = a * a;
    int x  = a;

    // Normalne obliczenia arytmetyczne
    printf( "Wielomian 3x5 + 2x4 -5x3 -x2 +7x - 6 ma wartość %d .\n", 
            3 * x5 + 2 * x4 - 5 * x3 - x2 + 7 * x -6);

    // Wielomian obliczany wg reguły Hornera.
    printf( "Wielomian obliczny wg reguły Hornera ma  wartość %d .\n", 
            ((((3 * x + 2) * x -5)* x - 1) * x + 7) * x - 6);

    return 0;
}