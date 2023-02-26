// Przykład zastępowania niektórych znaków które mogą nie występować
// na klawiaturze innymi znakiami (dwóznakami i trójznakami).
// Sławomir Chowański 2023-02-26

// Znak # można zastąpić dwuznakiem %:

%:include <stdio.h>

// Znak { można zastąpić dwuznakiem <% a znak } znakiem %>
int main() <% 

    printf( "To jest test dwuznakow.\n" );

    int arr <::> = <% 10, 20, 30 %>;
    printf( "Drugim elementem tablicy jest %d \n", arr<:1:> );

    return 0; 
%>