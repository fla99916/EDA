#include <iostream>
using namespace std;

int main() {
	int h, c;

	cin >> h >> c;
	while (h != 0 && c != 0) {
		if (h <= c) cout << 10 << endl;
		else {
			int t = h / c;
			if(h%c == 0) cout << (t * 10) << endl;
			else cout << (t * 10) + 10 << endl;
		}

		cin >> h >> c;
	}

	return 0;
}