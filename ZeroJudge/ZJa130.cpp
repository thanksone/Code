#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        vector <string> google;
        int luck[10];
        for(int j = 0; j < 10; j++){
            string adrs;
            int t;
            cin >> adrs >> t;
            google.push_back(adrs);
            luck[j] = t;
        }
        int sp = 0, tmp = luck[0];
        for(int j = 1; j < 10; j++){
            if(luck[j] > tmp) {sp = j; tmp = luck[j];}
        }
        cout << "Case #" << i + 1 << ":\n";
        for(int j = sp; j < 10; j++){
            if(luck[j] == tmp) cout << google[j] << endl;
        }
    }
    return 0;
}
