#include <iostream>
#include <string>
#include "main.h" 

using namespace std;

int interaction = 0;

int main() {
    Huerta datosHuerta;

    cout << "\nBienvenido al proyecto de Huertas Urbanas de Plan Verde!" << endl;
    cout << "Por favor, ingrese el número de la acción que desea realizar:" << endl;
    cout << "1. Cargar y procesar datos de una huerta" << endl;
    cout << "2. Mostrar resultados" << endl;
    cout << "3. Salir" << endl;

    while (true) {
        cin >> interaction;
        switch (interaction) {
            case 1:
                datosHuerta.id = generarID();
                cout << "Usted ha elegido cargar y procesar datos de una huerta." << endl;
                cout << "Se le ha asignado el número '" << datosHuerta.id << "' como identificador de huerta." << endl;
                datosHuerta = cargarDatos();
                break;

            case 2:
                cout << "Usted ha elegido mostrar los resultados de la huerta." << endl;
                mostrarDatos(datosHuerta);
                break;

            case 3:
                cout << "Usted ha elegido salir del programa." << endl;
                return 0;

            default:
                cout << "Opción no válida. Por favor, intente nuevamente." << endl;
                break;
        }

        cout << "\n¿Qué desea hacer a continuación?" << endl;
        cout << "1. Cargar y procesar datos de una huerta" << endl;
        cout << "2. Mostrar resultados" << endl;
        cout << "3. Salir" << endl;
    }

    return 0;
}
