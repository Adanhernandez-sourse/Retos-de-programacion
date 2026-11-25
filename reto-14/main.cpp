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
 * Reto: 14                                       *
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
    cout << "=== RETO 14 - ARREGLOS DE ESTRUCTURAS CON APUNTADORES ===" << endl << endl;

    // 2. Arreglo de estructuras
    cout << "--- 1. Arreglo de estructuras ---" << endl;
    Alumno grupo[3] = {
        { "Adan", 18, 9.0 },
        { "Maria", 19, 9.8 },
        { "Juan", 21, 8.7 }
    };

    for (int i = 0; i < 3; i++) {
        cout << grupo[i].nombre << ", " << grupo[i].edad << " anios, " << grupo[i].promedio << endl;
    }
    cout << endl;

    // 3. Apuntador al arreglo
    cout << "--- 2. Con apuntador ---" << endl;
    Alumno* p = grupo; // p apunta al primer alumno

    for (int i = 0; i < 3; i++) {
        cout << (p + i)->nombre << ", " << (p + i)->edad << " anios, " << (p + i)->promedio << endl;
    }
    cout << endl;

    // 4. Modificando con apuntador
    cout << "--- 3. Modificando con apuntador ---" << endl;
    cout << "Antes: " << p->nombre << " tiene " << p->promedio << endl;
    p->promedio = 10.0;
    cout << "Despues: " << p->nombre << " tiene " << p->promedio << endl << endl;

    // 5. Otra forma: p[i]
    cout << "--- 4. Otra forma: p[i] ---" << endl;
    for (int i = 0; i < 3; i++) {
        cout << p[i].nombre << ", " << p[i].edad << " anios, " << p[i].promedio << endl;
    }

    return 0;
}
