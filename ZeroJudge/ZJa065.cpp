#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(){
    string word;
    while(cin >> word){
        int password;
        for(int i = 0; i < 6; i++){
            password = abs(int(word[i + 1]) - int(word[i]));
            cout << password;
        }
        cout << endl;
    }
    return 0;
}
