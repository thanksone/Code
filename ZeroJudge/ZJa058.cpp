#include <iostream>
using namespace std;

int main(){
    int total[3] = {0, 0, 0};
    int a;
    while(cin >> a){
        for(int i = 0; i < a; i++){
            int b;
            cin >> b;
            if(b % 3 == 0){
                total[0] += 1;
            }else if(b % 3 == 1){
                total[1] += 1;
            }else{
                total[2] += 1;
            }
        }
        for(int i = 0; i < 3; i++){
            cout << total[i] << " ";
        }
    }
}
