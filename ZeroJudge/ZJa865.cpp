#include <iostream>
#include <string>
using namespace std;

int main(){
    int aph[26] = {1,2,600,4,5,500,3,9,10,0,20,30,40,50,70,80,90,100,200,300,400,0,800,60,8,7};
    string s;
    while(cin >>s){
        if(s == ".") break;
        int t = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '#'){
                t += 6;
            }else if(s[i] == '$'){
                t += 700;
            }else if(s[i] == '3'){
                t += 900;
            }else{
                t += aph[(int)(s[i] - 'A')];
            }
        }
        cout << t << endl;
    }
    return 0;
}
