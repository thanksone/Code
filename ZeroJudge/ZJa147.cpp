#include <iostream>
#include <cmath>
using namespace std;



int main() {
	long long n;
	while (cin >> n ) {
		if (n == 0) {
			break;
		}
		for (int i = 1; i < n; i++) {
			if (i % 7 == 0) {
				continue;
			}
			else {
				cout << i << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
