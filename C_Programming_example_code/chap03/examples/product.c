/*
 * product.c
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

    int number, day, month, year;
    float price;

    printf( "Proszę podaj numer towaru: " );
    scanf( "%d", &number );
    printf( "Proszę podaj cenę jednostkową:: " );
    scanf( "%f", &price );
    printf( "Proszę podaj datę zakupu (dd/mm/yyyy): " );
    scanf( "%d /%d /%d", &day, &month, &year );
    printf( "\n" );

    printf( "Towar \t Cena \t\t Data   \n" );
    printf( "      \t jedn.\t\t zakupu \n" );
    printf( "---------------------------------\n" );  
    printf( "%d    \t %.2f \t\t %d%d%d \n", number, price, day, month, year );

    return 0;
}