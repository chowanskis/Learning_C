/*
 * kwadrat.c
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
    
    int i1, i2, i3, i4, i5, i6, i7, i8;
    int i9, i0, ia, ib, ic, id, ie, ig;

    int row1, row2, row3, row4;
    int col1, col2, col3, col4; 
    int przek1, przek2;
    
    printf( "Prosze podać liczby od 1 - 16 w dowolnej kolejności: " );
    scanf( "%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d"
                        , &i1, &i2, &i3, &i4, &i5, &i6, &i7, &i8
                        , &i9, &i0, &ia, &ib, &ic, &id, &ie, &ig);

    row1 =  i1 + i2 + i3 + i4;  col1 = i1 + i5 + i9 + ic;
    row2 =  i5 + i6 + i7 + i8;  col2 = i2 + i6 + i0 + id;
    row3 =  i9 + i0 + ia + ib;  col3 = i3 + i7 + ia + ie;
    row4 =  ic + id + ie + ig;  col4 = i4 + i8 + ib + ig;

    przek1 = i1 + i6 + ia + ig; 
    przek2 = ic + i0 + i7 + i4;

    printf( "Wartość wysztskich rzędów: %d %d %d %d \n", row1, row2, row3, row4 );
    printf( "Wartość wysztskich kolumn: %d %d %d %d \n", col1, col2, col3, col4 );
    printf( "Wartość prezkątnych: %d %d \n", przek1, przek2 );

    return 0;
}