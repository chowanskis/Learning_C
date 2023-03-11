/*
 * Question_3.c
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
 * A. the program outputs 34
 * B. the program outputs 44
 * C. the program outputs 54
 * D. the program outputs 64
 */

#include <stdio.h>

int main(void) {
    
    int i = 10, j = 20, *p, s = 0;
    p = &i;
    i++;
    (*p)++;
    s = i + j + *p;
    printf( "%d",s );
    
    return 0;
}