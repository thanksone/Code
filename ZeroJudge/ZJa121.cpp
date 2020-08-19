#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(long long x) {
	if (x < 2) {
		return false;
	}
	else {
		for (long long j = 2; j * j <= x; j++) {
			if (x % j == 0) {
				return false;
			}
		}
		return true;
	}
}

int main() {
	long long n, m;
	while (cin >> n >> m) {
		long long t = 0, i = n;
		while (i <= m) {
			if (isPrime(i)) t++;
			i++;
		}
		cout << t << endl;
	}
	return 0;
}
