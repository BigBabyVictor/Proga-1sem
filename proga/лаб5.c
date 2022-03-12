#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    printf(" Задание №1\n");

    int iArray[] = {23,5678,2,564,365,77,443};

    for (int i = 0; i < sizeof(iArray)/sizeof(int); i++)
    {
        printf("%d ", iArray[i]);
    }

    
    printf("\n\n Задание №2 \n");

    int matrix1[2][2] = {
        { 1, 0 },
        { 1, 4 }
    };

    int matrix2[2][2] = {
        { 1, 2 },
        { 0, 1 }
    };

    // вычисление и заполнение матрицы
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            int sum = 0;
            for (int k = 0; k < 2; k++)
            {
                sum += matrix1[i][k] * matrix2[k][j];
            }
            printf("%d ", sum);
        }
        printf("\n");
    }

    return 0;
}

