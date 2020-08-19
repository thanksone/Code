#include <iostream>
using namespace std;

int main() {
	int year, n;
	while (cin >> year) {
		n = 0;
		if (year % 4 == 0) {
			n = 1;
		}
		if(year % 100 == 0){
			n = 0;
		}
		if (year % 400 == 0) {
			n = 1;
		}
		cout << (n == 0 ? "¥­¦~" : "¶|¦~") << endl;
	}
	return 0;
}
