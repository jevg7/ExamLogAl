#include <stdio.h>


float calcular_ganancia(float precio_compra, float precio_venta, int existencia) {
    float ganancia_individual = (precio_venta - precio_compra) * existencia;
    return ganancia_individual;
}

int main() {
    float ganancia_total = 0;
    char producto[100];
    float precio_compra, precio_venta;
    int existencia;

    
    printf("Producto: ");
    scanf("%s", producto);
    printf("Precio Compra: ");
    scanf("%f", &precio_compra);
    printf("Precio Venta: ");
    scanf("%f", &precio_venta);
    printf("Existencia: ");
    scanf("%d", &existencia);

   
    float ganancia_individual = calcular_ganancia(precio_compra, precio_venta, existencia);

    
    ganancia_total += ganancia_individual;

    
    printf("Ganancia de %s: %.2f\n", producto, ganancia_individual);
    printf("Ganancia total: %.2f\n", ganancia_total);

    return 0;
}