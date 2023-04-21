#include <iostream>
using namespace std;
int main() {

	int a = 1;
	int b = 1;
	int n;
	cout << "Sayi degeri giriniz:";
	cin >> n;
	if (n == 0);
	else if (n == 1)
		cout << 1 << endl;

	else {
		cout << a << endl << b << endl;
		for (int i = 0; i < n - 2; i++) {
			int c = a + b;
			a = b;
			b = c;
			cout << c << endl;

		}

	}
	return 0;
}
