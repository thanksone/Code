#include <iostream>
using namespace std;

int main() {
	long long n;
	while (cin >> n) {
		long long t = 0, m;
		for (int i = 0; i < n; i++) {
			cin >> m;
			t += m;
		}
		cout << (t > n * 59 ? "no" : "yes") << endl;
	}
	return 0;
}
