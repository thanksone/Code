#include <iostream>
#include <string>
#include <cmath>
using namespace std;

bool solve(int n, string s){
    int t = 0, p = 0;
    for(int i = 0; i < s.size(); i++){
        t += (int)(s[i] - '0') * pow(n, s.size() - 1 - i);
        p += pow((int)(s[i] - '0'), s.size());
    }
    return (t == p?true : false);
}
int main(){
    int n;
    string s;
    while(cin >> n >> s){
        cout << (solve(n, s)? "YES" : "NO") << endl;
    }
    return 0;
}
