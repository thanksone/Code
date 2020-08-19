#include<iostream>
#include<string>
using namespace std;

int main(int argc, char** argv){
	string password;
        cin >> password;
	for (int i = 0; i < password.size(); i++) {
		char a = password[i] - 7;
                cout << a;
	}
}
