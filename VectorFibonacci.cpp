// Cargar un Vector de 10 posiciones con los 10 primeros elementos de la serie de Fibonacci y mostrarlo en pantalla.
//

#include <iostream>
#include <stdlib.h>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec(10);
    int x = 0, y = 1, z = 1;

    cout << "Los 10s numeros de la serie de Fibonacci:\n";
    cout << "\n";


    for (int i = 0; i < 10; i++) {
        vec[i] = x;
        z = x + y;
        x = y;
        y = z;
    }
    for (int i = 0; i < 10; i++) {
        cout << vec[i] << " ";
    }
    cout << "\n";
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
