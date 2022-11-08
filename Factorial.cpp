// Leer 10 números enteros almacenarlos en un vector y calcular el factorial de cada uno de los numeros 
// que contiene el vector estos factoriales deben ser almacenados en otro vector y mostrarlos en pantalla.
//

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec(10);
    vector<int> fac(10);

    int i, f = 1;

    cout << "Ingrese 10s numeros enteros: \n";
    for (int i = 0; i < 10; i++) {
        cout << i + 1 << ". Digite un numero: \n";
        cin >> vec[i];
    }for (int i = 1; i < vec[i]; i++) {
        fac[i] = f * vec[i];
    }for (int i = 0; i < 10; i++) {
        cout << "\n";
        cout << "El factorial de " << vec[i] << " es: " << fac[i] << endl;
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
