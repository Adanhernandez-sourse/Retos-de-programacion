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