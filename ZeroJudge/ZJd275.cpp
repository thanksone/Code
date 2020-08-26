#include <iostream>
#include <string>
using namespace std;

bool solve(string s){
    if(s.size() == 2) return false;
    int sx = 0, first = 0;
    if(s[0] == 'F') {first = 1; sx = 1;}
    for(int i = 1; i < s.size(); i++){
        if(s[i - 1] == ' '){
            if(s[i] == 'M' && sx == 0) return false;
            else if(s[i] == 'F' && sx == 1) return false;
        }else{
            if(s[i] == 'M') sx = 0;
            else if(s[i] == 'F') sx = 1;
            if(i == s.size() - 1 && sx == first) return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string s;
        getline(cin, s);
        cout << (solve(s)? "LOOP" : "NO LOOP") << endl;
    }
    return 0;
}
