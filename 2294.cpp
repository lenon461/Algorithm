#include <iostream>

using namespace std;

int main(){
    
    int n, k;
    cin >> n >> k ;

    int coin[n];
    int dp[k+1] = {0, };

    for(int i = 0; i < n; i++){
        cin >> coin[i];
    }

    for(int i = 1; i <=  k; i++){
        
        for(int j = 0; j < n; j++){
            if(i - coin[j] >= 0){
                if(dp[i] != 0 && dp[i-coin[j]] != 0) {
                    dp[i]  = min(dp[i - coin[j]] + 1, dp[i]);
                }
                else if(i-coin[j] == 0 || dp[i-coin[j]] != 0){
                    dp[i] = dp[i-coin[j]] + 1;
                }
            }
        }
    }
    for(int i = 0; i <= k; i++){
        cout << dp[i] << " ";
    }
    cout << endl;
    if(dp[k] == 0) cout << -1;
    else cout << dp[k];
}
