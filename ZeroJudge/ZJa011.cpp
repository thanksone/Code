#include <iostream>
#include <string>
using namespace std;

bool isaph(char c){
    if(c <= 'Z' && c >= 'A') return true;
    else if(c <= 'z' && c >= 'a') return true;
    return false;
}
int main(){
    string s;
    while(getline(cin , s, '\n')){
        int n = 0, f = 0;
        for(int i = 0; i < s.size(); i++){
            if(isaph(s[i])) f = 1;
            if(f == 1 && isaph(s[i]) == false){n++; f = 0;}
            if(f == 1 && i == s.size() - 1) n++;
        }
        cout << n << endl;
    }
    return 0;
}
