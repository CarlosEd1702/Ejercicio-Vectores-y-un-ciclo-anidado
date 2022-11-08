// Leer 12 enteros, almacenarlos en un vector y determinar cuál de esos enteros es el mayor.
//

#include <iostream>
#include <conio.h>
#include <vector>

using namespace std;

int main()
{	
	vector<int> vec(12);
	int num[12], i, n, mayor = 0;

	cout << "Digite 12 numeros enteros para determinar la cifra mayor.\n";
	
	for (i = 0; i < 12; i++) {
		cout << i + 1 << ". Numero: ";
		cin >> n;
		vec[i] = n;
		if (vec[i] > mayor) {
			mayor = vec[i];
		}
	}
	cout << "El numero mayor es: "<< mayor <<endl;
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
