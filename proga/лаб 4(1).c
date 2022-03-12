#include <stdio.h>

#define MIN 1
#define MAX 100

int main()  
{  
   int x ;
   int result;  
   printf("Введите число \n");
   scanf("%d", &x);  
   result = (MIN <= x) && (x <= MAX);
       

   printf("Число %d в диапазоне %d...%d :  %s \n", x, MIN, MAX, result? "да": "нет");  
   
}
