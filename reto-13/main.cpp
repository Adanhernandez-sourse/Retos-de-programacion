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
 * Reto: Uso de estructuras                       *
 **************************************************/

#include <iostream>
using namespace std;

// 1. Definimos la estructura
struct Alumno {
    char nombre[50];
    int edad;
    float promedio;
};

int main() {
    cout << "=== RETO 13 - USO DE ESTRUCTURAS ===" << endl << endl;

    // 2. Estructura como variable simple
    cout << "--- 1. Variable simple ---" << endl;
    Alumno a1;
    // Llenamos con .
    strcpy_s(a1.nombre, "Adan");
    a1.edad =18;
    a1.promedio = 9.0;

    cout << "Nombre: " << a1.nombre << endl;
    cout << "Edad: " << a1.edad << endl;
    cout << "Promedio: " << a1.promedio << endl << endl;

    // 3. Inicializando al declarar
    cout << "--- 2. Inicializada al declarar ---" << endl;
    Alumno a2 = { "Maria", 19, 9.8 };
    cout << "Nombre: " << a2.nombre << endl;
    cout << "Edad: " << a2.edad << endl;
    cout << "Promedio: " << a2.promedio << endl << endl;

    // 4. Copiando una estructura a otra
    cout << "--- 3. Copia de estructura ---" << endl;
    Alumno a3 = a1;
    cout << "a3 copiado de a1: " << a3.nombre << ", " << a3.edad << " anios, " << a3.promedio << endl << endl;

    // 5. Modificando con .
    cout << "--- 4. Modificando con punto (.) ---" << endl;
    a1.promedio = 10.0;
    cout << "Nuevo promedio de a1: " << a1.promedio << endl;

    return 0;
}
