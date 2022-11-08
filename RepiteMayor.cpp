// Leer 8 enteros, almacenarlos en un vector y determinar cuántas veces se está repitiendo el número mayor
//

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec(8);
    int num = 0, con = 1;

    cout << "Ingrese 8 numeros enteros: \n";
    for (int i = 0; i < 8; i++) {
        cout << i + 1 << ". Digite un numero: ";
        cin >> vec[i];

        if (vec[i] > num) {
            num = vec[i];
        }
        else if (vec[i] == num) {
            con++;
        }
    }

    cout << "El mayor elemento del vector es: "<< num << endl;
    cout << "Se repite: " << con <<" veces." << endl;
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
