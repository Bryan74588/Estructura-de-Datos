#include <iostream>
#include <vector>
#include <algorithm>
#include <locale>
using namespace std;

int main() {
    setlocale(LC_ALL, "");
    
    vector<string> canciones;
    string cancion;
    string opcion;

    // Ingreso de 3 canciones
    for (int i = 0; i < 3; i++) {
        cout << "Ingrese la cancion " << i + 1 << ": ";
        getline(cin, cancion);
        canciones.push_back(cancion);
    }

    // Mostrar canciones
    cout << "Lista de canciones:" << endl;
    for (string c : canciones) {
        cout << c << endl;
    }

    // Preguntar si desea agregar canción
    cout << "¿Desea agregar otra cancion? (si/no): " << endl;
    getline(cin, opcion);

    if (opcion == "si") {
        cout << "Ingrese la nueva cancion: ";
        getline(cin, cancion);
        canciones.push_back(cancion);
    }

    // Preguntar si desea eliminar canción
    cout << "\n¿Desea eliminar una cancion? (si/no): ";
    getline(cin, opcion);

    if (opcion == "si") {
        string eliminar;
        cout << "Ingrese la cancion a eliminar: ";
        getline(cin, eliminar);

        auto it = find(canciones.begin(), canciones.end(), eliminar);
        if (it != canciones.end()) {
            canciones.erase(it);
            cout << "Cancion eliminada." << endl;
        } else {
            cout << "Cancion no encontrada." << endl;
        }
    }

    // Mostrar lista actualizada
    cout << "Lista actualizada:" << endl;
    for (string c : canciones) {
        cout << c << endl;
    }

    // Ordenar canciones
    sort(canciones.begin(), canciones.end());

    cout << "------------------------------" << endl;

    // Mostrar lista ordenada
    cout << "Canciones ordenadas:" << endl;
    for (string c : canciones) {
        cout << c << endl;
    }

    return 0;
}