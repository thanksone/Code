#include <iostream>
using namespace std;

int main(){
    int nums;
    while(cin >> nums){
        for(int i = 0; i < nums; i++){
            int num;
            while(cin >> num){
                int k = 1;
                if(num == 0){
                    cout << 0;
                    break;
                }
                while(num > 0){
                    k *= num % 10;
                    num /= 10;
                }
                cout << k << endl;
            }
        }
    }
    return 0;
}
