// Leer 7 enteros, almacenarlos en un vector y determinar en qué posición está el número con más digitos.
//

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec(7);

    int i, n = 0, cifras = 1;

    cout << "Ingrese 7 numeros enteros." << endl;

    for (i = 0; i < 7; i++) {
        cout << i + 1 << ". Numero: ";
        cin >> vec[i];
        if (vec[i] > n) {
            n = vec[i];
        }
    }
    if (n >= 0 && n <= 9) {
        cout << "El numero " << n << endl;
        cout << "El numero es de 1 digitos.\n";
        cout << "Se encuentra en la posicion: "<< i+1<<endl;
    }else if (n >= 10 && n <= 99) {
        cout << "El numero " << n << endl;
        cout << "El numero es de 2 digitos.\n";
        cout << "Se encuentra en la posicion: " << i + 1 << endl;
    }else if (n >= 100 && n <= 999) {
        cout << "El numero " << n << endl;
        cout << "El numero es de 3 digitos.\n";
        cout << "Se encuentra en la posicion: " << i + 1 << endl;
    }else if (n >= 1000 && n <= 9999) {
        cout << "El numero " << n << endl;
        cout << "El numero es de 4 digitos.\n";
        cout << "Se encuentra en la posicion: " << i + 1 << endl;
    }else if (n >= 10000 && n <= 99999) {
        cout << "El numero " << n << endl;
        cout << "El numero es de 5 digitos.\n";
        cout << "Se encuentra en la posicion: " << i + 1 << endl;
    }else if (n >= 100000) {
        cout << "El numero " << n << endl;
        cout << "El numero es tiene mas de 5 digitos.\n";
        cout << "Se encuentra en la posicion: " << i + 1 << endl;
    }
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
