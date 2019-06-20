#include <iostream>

using namespace std;

int main(){
    
    int n, k;
    cin >> n >> k;

    int dp[1001][1001];

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= k; j++){
            if(j == 1){
                dp[i][1] = i;
            }
            else 
                dp[i][j] = ( dp[i-1][j-1] + dp[i-1][j] ) % 10007;
        }
    }
    if(k == 0) cout << 1;
    else
        cout << dp[n][k] << endl;
}
