/**************************************************
 * Universidad Politecnica de Tulancingo          *
 * Ingenieria en sistemas electronicos            *
 * Programacion estructurada                      *
 * septiembre-diciembre 2026                      *
 * A Negrete                                      *
 **************************************************
 * App que maneja la terminal o simbolo del       *
 * sistema                                        *
 * Alumno: Adan Hernandez                         *
 * Reto: [pon aqui el numero de reto]             *
 **************************************************/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// 1. Estructura para cada figura
struct Etapa {
    string lineas[10];
    int numLineas;
};

int main() {
    cout << "=== RETO 15 - LECTURA DEL ARCHIVO DEL AHORCADO ===" << endl << endl;

    // 2. Arreglo de estructuras
    Etapa figuras[10];
    int total = 0;

    // 3. Abrir el archivo
    ifstream archivo("ahorcado.txt");
    if (!archivo) {
        cout << "No se pudo abrir ahorcado.txt" << endl;
        cout << "Asegurate de que este en la carpeta del proyecto." << endl;
        return 1;
    }

    // 4. Leer linea por linea
    string linea;
    figuras[0].numLineas = 0;
    while (getline(archivo, linea)) {
        if (linea == "===") {
            // Termino una figura, pasamos a la siguiente
            total++;
            figuras[total].numLineas = 0;
        }
        else {
            figuras[total].lineas[figuras[total].numLineas] = linea;
            figuras[total].numLineas++;
        }
    }
    total++; // porque empezamos en 0
    archivo.close();

    cout << "Se leyeron " << total << " figuras del archivo." << endl << endl;

    // 5. Mostrar en forma secuencial
    for (int i = 0; i < total; i++) {
        cout << "--- Figura " << i + 1 << " ---" << endl;
        for (int j = 0; j < figuras[i].numLineas; j++) {
            cout << figuras[i].lineas[j] << endl;
        }
        cout << endl;
        cout << "Presiona ENTER para ver la siguiente...";
        cin.get();
    }

    cout << "Fin de la secuencia del juego." << endl;
    return 0;
}
