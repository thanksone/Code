#include<iostream>
using namespace std;

int main() {
	int a;
	while (cin >> a) {
		while (a > 1) {
			for (int i = 2; i <= a; i++) {
				int count = 0;
				while (a % i == 0) {
					a /= i;
					count++;
				}
				if (a == 1) {
					if (count == 0) {
						continue;
					}
					else if (count == 1) {
						cout << i;
					}
					else {
						cout << i << "^" << count;
					}
				}
				else {
					if (count == 0) {
						continue;
					}
					else if (count == 1) {
						cout << i << " * ";
					}
					else {
						cout << i << "^" << count << " * ";
					}

				}
			}
		}
	}
	return 0;
}
