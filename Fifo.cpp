
#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    queue<string> cola;
    string entrada;

    cout << "REGISTRO DE ENTRADAS FIFO\n";

    for (int i = 0; i < 4; i++) {
        cout << "Ingrese la entrada " << i + 1 << ": ";
        cin >> entrada;
        cola.push(entrada);
    }

    cout << "\nEntradas registradas en la cola:\n";

    queue<string> copia = cola;

    while (!copia.empty()) {
        cout << copia.front() << endl;
        copia.pop();
    }

    cout << "\nPROCESAMIENTO DE LA COLA FIFO\n";

    while (!cola.empty()) {
        cout << "Sale: " << cola.front() << endl;
        cola.pop();
    }

    cout << "\nTodas las entradas fueron procesadas.\n";

    return 0;
}


