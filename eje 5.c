#include<stdio.h>
//Cree una función calcular el total a pagar por la compra de un auto sabiendo el precio, el
//impuesto de valor agregado del 15%, y el descuento del 5% si este excede su precio a U$ 25,000

int main(int argc, char const *argv[])
{
    float total;
    float compra;
    float valorA;
    float compraVa;
    



    printf("escribe el precio de la compra: ");
    scanf("%f", &compra);
    valorA = compra * 0.15;
    compraVa = compra + valorA;


    
    if (compra > 25000)

    {
        total = compraVa - (compraVa * 0.5);
        printf("el precio con descuento es: %.2f", total);
    }
    else
    {
        printf("el precio es %.2f", compraVa);
    }

    


    return 0;
}
