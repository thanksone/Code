#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    cin.ignore();
    for(int j = 0; j < n; j++){
        string s, num;
        getline(cin , s, '\n');
        stringstream ss(s);
        long long t = 0;
        while(ss>>s){
            if(s == "+")continue;
            t += stoll(s);
        }
        cout << t << endl;
    }
    return 0;
}
