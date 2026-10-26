#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {
    char texto[100];
    int vocales = 0;
    printf("Ingresa una palabra: "); 
    scanf("%s", texto);
    for (int i = 0; i < strlen(texto); i++) {
        switch (texto[i]) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
            vocales++; break;
        }
    }
    printf("Vocales: %d\n", vocales);
    return 0;
}