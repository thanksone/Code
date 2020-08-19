#include <iostream>
#include <string>
using namespace std;

int main() {
	int atn[26] = { 1, 0, 9, 8, 7, 6, 5, 4, 9, 3, 2, 2, 1, 0, 8, 9, 8, 7, 6, 5, 4, 3, 1, 3, 2, 0 };
	int t = 0;
	string s;
	cin >> s;
	for (int i = 0; i < 8; i++) {
        int n = (int)(s[i] - '0');
		t += n * (8 - i);
	}
	for (int i = 0; i < 26; i++) {
		if ((t + atn[i] + (int)(s[8] - '0')) % 10 == 0) cout << (char)('A' + i);
	}
	cout << endl;
}
