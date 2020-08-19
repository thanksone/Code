#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	while (cin >> s) {
		bool back = true;
		for (int i = 0; i < s.size() / 2; i++) {
			if (s[i] != s[s.size() - i - 1]) {
				back = false;
				break;
			}
		}
		cout << (back ? "yes" : "no") << endl;
	}
	return 0;
}
