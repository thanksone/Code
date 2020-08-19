#include <iostream>
using namespace std;
int main(){
    int m, n;
    while(cin >> m >> n){
        if(m == n){
            cout << n << "\n";
        }else{
            cout << n + 1 << "\n";
        }
    }
}
