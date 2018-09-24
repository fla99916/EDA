#include <iostream>
#include <string>
using namespace std;

int main() {

	int nCase;
	cin >> nCase;
	for (int i = 0; i < nCase; i++)
	{
		char c;
		string name="";
		cin >> c;
		while (cin.get(c)){ 
			if (c == ' ') break;
		}

		cin >> name;
		

		cout << "Hola, " << name << "." << endl;
	}

	return 0;
}