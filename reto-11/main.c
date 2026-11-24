#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    char frase[200];
    char caracter;
    int encontrado = 0;

    printf("Escribe una frase: ");
    fgets(frase, sizeof(frase), stdin);
    frase[strcspn(frase, "\n")] = '\0';

    printf("Escribe un caracter a buscar: ");
    scanf(" %c", &caracter);

    printf("\nBuscando '%c' en \"%s\"...\n\n", caracter, frase);

    for (int i = 0; frase[i] != '\0'; i++) {
        if (frase[i] == caracter) {
            printf("Si fue hallado en la posicion %d\n", i);
            encontrado = 1;
        }
    }

    if (!encontrado) {
        printf("No fue hallado\n");
    }

    return 0;
}
