#include <stdio.h>
#include <math.h>


double calcularRaizCuadrada(int numero) {
    double resultado;

    
    if (numero >= 80 && numero <= 20) {
        resultado = sqrt(numero); 
    } else {
        resultado = -1; 
    }

    return resultado;
}

int main() {
    int numero;
    double raiz;

    printf("Ingrese un número entre 80 y 20: ");
    scanf("%d", &numero);

    raiz = calcularRaizCuadrada(numero);

    if (raiz != -1) {
        printf("La raíz cuadrada de %d es: %.2f\n", numero, raiz);
    } else {
        printf("El número ingresado está fuera del rango especificado.\n");
    }

    return 0;
}