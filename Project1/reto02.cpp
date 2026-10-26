#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    float n1, n2;
    printf("Num1: "); 
    scanf("%f", &n1);
    printf("Num2: "); 
    scanf("%f", &n2);
    printf("Suma: %.2f\nResta: %.2f\nMult: %.2f\n", n1 + n2, n1 - n2, n1 * n2);
    if (n2 != 0) 
        printf("Div: %.2f\n", n1 / n2);
    return 0;
}