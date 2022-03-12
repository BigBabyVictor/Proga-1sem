#include <stdio.h>
 
int main (void) {
    int num, bit;
    printf("номер бита :> ");
    if (scanf("%d%d", &num, &bit) != 2 || bit < 0)
        return 1;
 
    printf("бит: %d\n", num & (1 << bit));
    return 0;
}