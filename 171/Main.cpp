#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	while (n != 0) {
		int m[100000];
		for (int i = 0; i < n; i++)
		{
			cin >> m[i];
		}

		int count = 1;
		int highest = m[n - 1];
		for (int j = n-2; j >= 0; j--)
		{
			if (m[j] > highest) {
				count++;
				highest = m[j];
			}
		}

		cout << count << endl;

		cin >> n;
	}

	return 0;
}
