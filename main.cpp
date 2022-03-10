#include <iostream>
using namespace std;

void fib(int n) {
	int a = 0, b = 1;
	for (int i = 0; i < n; ++i) {
		cout << a << endl;
		int t = b;
		b += a;
		a = t;
	}
}

int main() {
	fib(10);
	return 0;
}