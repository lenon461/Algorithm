#include <iostream>

using namespace std;

int main(){
    
    int n;
    cin >> n;

    int arr[101][101] = {0, };
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    int dp[101][101] = {1, };
    for(int a = 0; a < n; a++){
        for(int b = 0; b < n; b++){
            
            for(int i = 1; i <= a; i++){
                if(dp[a-i][b] != 0 && arr[a-i][b] == i){
                    dp[a][b] += dp[a-i][b];
                }
            }
            for(int j = 1; j <= b; j++){
                if(dp[a][b-j] != 0 && arr[a][b-j] == j){
                    dp[a][b] += dp[a][b-j];
                }
            }
        }
    }

    // cout << endl;
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < n; j++){
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    cout << dp[n-1][n-1] << endl;
}

// 6
// 2 3 3 1 0 0
// 1 2 1 3 0 0
// 1 2 3 1 0 0
// 3 1 1 1 1 1
// 0 0 0 1 1 1
// 0 0 0 0 1 0