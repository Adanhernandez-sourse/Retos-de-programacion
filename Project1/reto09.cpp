/**************************************************
 * Universidad Politecnica de Tulancingo          *
 * Ingenieria en sistemas electronicos            *
 * Programacion estructurada                      *
 * septiembre-diciembre 2026                      *
 * A Negrete                                      *
 **************************************************
 * App que maneja la terminal o simbolo del       *
 * sistema                                        *
 * Alumno: Adan Hernandez Hernandez               *
 * Reto:   intercambio con punteros               *
 **************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void intercambiar(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main() {
    int a, b;
    printf("Valor a: "); 
    scanf("%d", &a);
    printf("Valor b: "); 
    scanf("%d", &b);
    printf("Antes: a=%d b=%d\n", a, b);intercambiar(&a, &b);
    printf("Despues: a=%d b=%d\n", a, b);
    return 0;
}