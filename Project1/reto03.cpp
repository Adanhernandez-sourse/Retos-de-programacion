#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    int n; printf("Numero: "); 
    scanf("%d", &n);
    if (n % 2 == 0) 
        printf("PAR\n"); 
    else printf("IMPAR\n");
    return 0;
}