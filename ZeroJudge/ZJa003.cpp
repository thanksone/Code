#include <iostream>
using namespace std;

int main(){
    int m, d;
    while(cin >> m >> d){
        if((m * 2 + d) % 3 == 0){
            cout << "´¶³q" << endl;
        }else{
            cout << ((m * 2 + d) % 3 == 1? "¦N" : "¤j¦N") << endl;
        }
    }
    return 0;
}
