#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    int numeros[5], suma = 0;
    for (int i = 0; i < 5; i++) {
        printf("Numero %d: ", i + 1); 
        scanf("%d", &numeros[i]);
        suma += numeros[i];
    }
    printf("Suma total: %d\n", suma);
    return 0;
}