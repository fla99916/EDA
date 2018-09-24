

#include <iostream>
using namespace std;

/*
Entrada
El programa recibirá en la primera línea de la entrada el número de casos de prueba. A continuación, cada caso de prueba estará compuesto de una única línea que contendrá un número (positivo).
Salida
Por cada caso de prueba n, se mostrará el último dígito (el de la derecha) de su factorial, n!.
*/


int main()
{
	int nCase;
	cin >> nCase;

	for (int i = 0; i < nCase; i++)
	{
		int n;
		cin >> n;
		switch (n) {
		case 0: cout << 1 << endl; break;
		case 1: cout << 1 << endl; break;
		case 2: cout << 2 << endl; break;
		case 3: cout << 6 << endl; break;
		case 4: cout << 4 << endl; break;
		default: cout << 0 << endl;
		}
	}
}


