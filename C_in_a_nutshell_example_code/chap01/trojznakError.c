// Przykład zastępowania niektórych znaków które mogą nie występować
// na klawiaturze innymi znakiami (dwóznakami i trójznakami).
// Sławomir Chowański 2023-02-26


#include <stdio.h>

int main(){

    // Uważaj, ??( to trójznak odpowiadający znakowi [ ale 
    // na moim kompilatorze to nie działa. Nie ma napisu Cancel?[Y?N}.
    // warning: trigraph ??( ignored, use -trigraphs to enable [-Wtrigraphs]
    //
    // gcc -trigraphs trojznakError.c
    // Cancel ?[Y/N).

    printf( "Cancel ???(Y/N).\n" );

    return 0;
}