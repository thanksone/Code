#include <iostream>
#include <cmath>
using namespace std;

int dp[51] = {0, 1, 2};
int solve(int n){
    if(dp[n]) return dp[n];
    return solve(n - 1) + solve(n - 2);
}
int main() {
	int n;
	while (cin >> n) {
        if(n == 0) break;
		cout << solve(n) << endl;
	}
	return 0;
}
