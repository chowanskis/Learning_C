/*
 * banknoty.c
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

#define BANKNOT_20 20
#define BANKNOT_10 10
#define BANKNOT_5 5

int main() {

    int kwota, nominal_20, nominal_10, nominal_5, nominal_1;

    printf( "Prosze podać kwotę w złotych (bez groszy): " );

    scanf( "%d", &kwota );

    nominal_20 = kwota / BANKNOT_20;
    nominal_10 = ( kwota - (nominal_20 * BANKNOT_20) ) / BANKNOT_10;
    nominal_5  = ( kwota - (nominal_20 * BANKNOT_20) - (nominal_10 * BANKNOT_10) ) / BANKNOT_5;
    nominal_1  = kwota % BANKNOT_5;

    printf( "Banknotów o niminale 20 PLN: %d \n", nominal_20 );
    printf( "Banknotów o niminale 10 PLN: %d \n", nominal_10 );
    printf( "Banknotów o niminale 5 PLN: %d \n", nominal_5 );
    printf( "Banknotów o niminale 1 PLN: %d \n", nominal_1 );

    return 0;
}