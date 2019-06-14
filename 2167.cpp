#include <iostream>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    int arr[301][301] = {0,};
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> arr[i][j];
        }
    }

    int dp[301][301] = {0,};
    dp[1][1] = arr[0][0];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(i == 1){
                dp[i][j] = dp[i][j-1] + arr[i][j];
            }
            else if(j == 1){
                dp[i][j] = dp[i-1][j] + arr[i][j];
            }
            else{
                dp[i][j] = dp[i][j-1] + dp[i-1][j] + arr[i][j] - dp[i-1][j-1];
            }
        }
    }

    int k;
    cin >> k;
    while(k){
        int a, b, x, y;
        cin >> a >> b >> x >> y;


        int result = dp[x][y] - dp[a-1][y] - dp[x][b-1]+ dp[a-1][b-1] ;
        cout << result << endl;
        k--;
    }
}
