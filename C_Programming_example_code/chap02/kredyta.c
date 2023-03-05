/*
 * kredyta.c
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

#define MONTHS_IN_YEAR 12.0f
#define PROCENT_FACTOR 100.0f

#include <stdio.h>

int main() {

    enum {count = 11};
    float kwota_kredytu, oprocentowanie_roczne, rata, odsetki;   

    printf( "Prosze podać kwotę kredytu w złotych: " );
    scanf( "%f", &kwota_kredytu );
    printf( "Prosze podać roczną stopę procentową: " );
    scanf( "%f", &oprocentowanie_roczne );
    printf( "Prosze podać miesięczną ratę: " );
    scanf( "%f", &rata );

    // Pierwsza rata - odsetki liczone od całego kapitału.
    odsetki = ( kwota_kredytu ) * ( ( oprocentowanie_roczne / PROCENT_FACTOR ) / MONTHS_IN_YEAR ); 
    kwota_kredytu = ( kwota_kredytu - rata ) + odsetki;
    printf( "Kwota do spłaty po pierwszej racie: %.2f \n", kwota_kredytu );

    // Kolejna rata - odsetki liczone od kwoty kredytu po spłacie raty.
    for (size_t i = 0; i < count; i++)
    {
        odsetki = ( kwota_kredytu ) * ( ( oprocentowanie_roczne / PROCENT_FACTOR ) / MONTHS_IN_YEAR ); 
        kwota_kredytu = ( kwota_kredytu - rata ) + odsetki;
        printf( "Kwota do spłaty po kolejnej racie:  %.2f \n", kwota_kredytu );
    }
    
    return 0;
}