#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
int main()
{
    // Задание 1 и 2
    float* a ;
    a= (float*)malloc(4* sizeof(float));
    a[0] = 56.4;
    a[1] = 36.5;
    a[2] = 7.7;
    a[3] = 44.3;
    for (int i = 0; i < 4; i++)
    {
        printf("%.1f ", *(a + i));
    }
     
    printf("\n");
    char *array;
    b = (char*)malloc(n);
    b[0] = '56.4';
    b[1] = '36.5';
    b[2] = '7.7';
    b[3] = '44.3';
    for (int i = 0; i < n; i++) {
        printf("%.1f ", b[i]);
    }

    free(a);
 

    return 0;
}