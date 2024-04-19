#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num, num2;
    printf("Ingrese un numero entero");
    scanf("%i", &num);
    printf("Ingrese un segundo numero entero");
    scanf("%i", &num2);

    if (num>num2) 
    printf("El primer numero es el mayor "), printf("El segundo numero es el menor ");
    else 
    { 
       printf("El segundo numero es el mayor "), printf("El primer numero es el menor ");
   
    }
    return 0;
}
