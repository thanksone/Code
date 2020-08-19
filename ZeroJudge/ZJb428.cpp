#include <iostream>
#include <string>
using namespace std;

bool check(string s){
    int t = 0;
    for(int i = 0; i < s.size(); i++){
        t += (i % 2 == 0? (int)(s[i] - '0') : (int)(s[i] - '0') * -1);
    }
    return (t % 11 == 0? true : false);
}
int main(){
    string s;
    while(cin >> s){
        if(s == "0") break;
        cout << s << (check(s)? " is a multiple of 11." : " is not a multiple of 11.") << endl;
    }
    return 0;
}
