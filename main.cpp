#include <iostream>
using namespace std;

// Function to analyze the average score
void analizar(double promedio) {
    if (promedio >= 7) {
        cout << "Aprobado";
    } else if (promedio >= 5 && promedio < 7) {
        cout << "Suspendido";
    } else if (promedio > 0 && promedio < 5) {
        cout << "Reprobado";
    } else {
        cout << "Nota invalida";
    }
}

int main() {
    double deber, trabajo, prueba, examen, promedio;

    cout << "Ingrese la nota de deberes: ";
    cin >> deber;
    cout << "Ingrese la nota de trabajos: ";
    cin >> trabajo;
    cout << "Ingrese la nota de prueba: ";
    cin >> prueba;
    cout << "Ingrese la nota de examen: ";
    cin >> examen;

    promedio = (deber + trabajo + prueba + examen) / 4;
    cout << "El promedio es: " << promedio << endl;
    cout << "Resultado: ";
    analizar(promedio);
    cout << endl;

    return 0;
}
