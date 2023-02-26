/*
 * Question_1.c
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

/*
 * What happens if you try to compile and run this program?
 * A. the program outputs 0
 * B. the program outputs 100 
 * C. the program outputs 200
 * D. the program outputs 300
 */

#include <stdio.h>

int main(){

    int i;
    i = 100;

    if ( i > 100 ) {
        i -= 100;
    } else if ( i >= 0) {
        i += 100;
    } else if ( i ) {
        i += 100;
    } else {
        i -= 100;
    }
    
    printf( "%d \n", i);

    return 0;
}