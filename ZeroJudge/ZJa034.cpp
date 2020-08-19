#include <iostream>
#include <sstream>
using namespace std;

int main() {
	int n;
	while (cin >> n) {
		int r = 1;
		while (r <= n) {
			r *= 2;
		}
		r /= 2;
		while (r > 0) {
			if (n >= r) {
				cout << 1;
				n -= r;
			}
			else {
				cout << 0;
			}
			r /= 2;
		}
		cout << endl;
	}
	return 0;
}
