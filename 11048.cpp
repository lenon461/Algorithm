#include <iostream>

using namespace std;

int main(){
    cin.tie(NULL);
ios_base::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;

    int arr[1001][1001] = {0, };

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }

    int dp[1001][1001] = {0, };
    dp[0][0] = arr[0][0];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(i == 0){
                dp[i][j] = dp[i][j-1] + arr[i][j];

            }
            else if(j == 0){
                dp[i][j] = dp[i-1][j] + arr[i][j];

            }
            else{
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]) + arr[i][j];

            }
        }
    }
    cout << dp[n-1][m-1];


}
