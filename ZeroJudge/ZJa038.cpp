#include <iostream>
#include<math.h>
using namespace std;

int main(){
    int a, b = 0;
    while(cin >> a){
        int p = a, i = 0;
        while(p >= 10){
            i++;
            p /= 10;
        }
        while(a > 0){
            int h = (a % 10), g = pow(10, i);
            b +=  h * g;
            a /= 10;
            i--;

        }
        cout << b << endl;
    }
}
