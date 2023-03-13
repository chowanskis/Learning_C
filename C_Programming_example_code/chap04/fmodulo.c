/*
 * fmodulo.c
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

 // Uważaj na kompilację : gcc fmodulo.c -lm
 // Musisz dodać bibliotekę matematyczną!
 // https://www.ibm.com/docs/en/zos/2.3.0?topic=functions-fmod-fmodf-fmodl-calculate-floating-point-remainder

#include <stdio.h>
#include <math.h>

int main() {

    int i = 10;
    int j = 3;

    float e = 10.0f;
    float f = 3.0f;
    
    double x, y, z;                                                              
                                                                                
    x = 10.0;                                                                   
    y = 3.0;                                                                     
    z = fmod(x,y);                                           
                                                                                        
    printf( "Operacja modulo na liczbach całkowitych %d \n", i % j );
    printf( "Operacja modulo dla double( %f, %f) = %lf\n", x, y, z);
    printf( "Operacja modulo dla float %lf \n", fmod( e, f ) );
    
    return 0;
}