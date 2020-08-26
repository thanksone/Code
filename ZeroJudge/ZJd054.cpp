#include <iostream>
using namespace std;

int main(){
    int n;
    int dp[41] = {0, 1};
    cin >> n;
    for(int i = 2; i <= 40; i++){
        dp[i] = dp[i - 2] + dp[i - 1] + 5;
        cout << dp[i] << " ";
    }
    for(int i = 0; i < n; i++){
        int t;
        cin >> t;
        cout << dp[t] << endl;
    }
    return 0;
}
