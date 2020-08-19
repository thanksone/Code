#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int times;
    while(cin >> times){
        for(int i = 1; i <= times; i++){
            int a, b, t = 0;
            cin >> a >> b;
            int p = a;
            while(true){
                if(pow(sqrt(p), 2) == p){
                    break;
                }
                p++;
            }
            while(p <= b){
                t += p;
                p += (2 * sqrt(p) + 1);
            }
            cout << "Case " << i << ": "<< t << endl;
        }
    }
    return 0;
}
