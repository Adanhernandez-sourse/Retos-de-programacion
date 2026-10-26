#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};
int main() {
    struct Estudiante alumno;
    printf("Nombre: "); 
    scanf(" %[^\n]", alumno.nombre);
    printf("Edad: "); 
    scanf("%d", &alumno.edad);
    printf("Promedio: "); 
    scanf("%f", &alumno.promedio);

    printf("\n--- Registro ---\n");
    printf("Nombre: %s\n", alumno.nombre);
    printf("Edad: %d\n", alumno.edad);
    printf("Promedio: %.2f\n", alumno.promedio);
    return 0;
}