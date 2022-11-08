//Leer 10 enteros, almacenarlos en un vector y determinar en qué posición(índice) del vector se encuentran los números terminados en 4.
//

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec(10);

    int i, n = 0;
    cout << "Ingresa 10s numeros enteros: \n";

    for (i = 0; i < 10; i++) {
        cout << i + 1 <<". Numero: ";
        cin >> n;
        vec[i] = n;
    }
    for (i = 0; i < vec.size(); i++) {
        if (vec[i] % 10 == 4) {
            cout << endl;
            cout << "El numero " << vec[i] << " termina en 4." << endl;
            cout << "Se encuentra en la posicion:  " << i + 1 << endl;
            cout << endl;
        }
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
