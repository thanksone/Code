#include <iostream>
#include <string>
using namespace std;

int main(){
    int n, total;
    while(cin >> n >> total){
        int m = 0, count = 0;
        while(true){
            m += n + count;
            count++;
            if(m > total){
                break;
            }
        }
    cout << count << endl;
    }
    return 0;
}
