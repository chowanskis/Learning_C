/*
 * wczytajUlamek.c
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

int main() {

    int i, j;

    printf( "Proszę wpisać ułamek w formacie ( cyfra <spacja> / <spacja> cyfra ): " );

    // Popatrz na specyfikator konwersji !!!
    // Aby umożliwić wczytanie spacji przed znakiem kreski ułamkowej /
    // po pierwszym specufikatorze %d musi być obowiązkoa spacja.
    // Jej brak wyłożoy program, bo scanf będzie od razu po wczytaniu
    // cyfry oczekiwał kreski, a napotka spację. 
    scanf( "%d /%d", &i, &j );
    printf( "Wprowadzony ułamek to: %d / %d.\n", i, j );

    return 0;
}