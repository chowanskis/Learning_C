/*
 * isbn.c
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

    int gsi, group, publisher, publication, control;

    printf( "Proszę podaj numer ISBN (XXX-X-XXX-XXXXX-X): " );
    scanf( "%d -%d -%d -%d -%d", 
        &gsi, &group, &publisher, &publication, &control );
    
    printf( "Przedrostek GSI: %d \n", gsi );
    printf( "Identyfikator grupy: %d \n", group );
    printf( "Kod wydawcy: %d \n", publisher  );
    printf( "Numer publikacji: %d \n", publication );
    printf( "Cyfra kontrolna %d \n", control );

    return 0;
}