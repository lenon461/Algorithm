#include <iostream>

using namespace std;

int main(){
    int m, n;
    cin >> m >> n;

    int arr[501][501];
    int dp[501][501] = {1, };
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
            dp[i][j] = -1;
        }
    }
    dp[0][0] = 1;


    int calc[4][2] = {
        {0,1},{1,0},{-1,0},{0,-1}
    };

    while( dp[m-1][n-1] == -1){
        
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(i == 0 && j == 0) continue;

                bool cont = 1;
                int temp = 0;

                for(int k = 0; k < 4; k++){
                    
                    int a = i + calc[k][0];
                    int b = j + calc[k][1];

                    if(a < 0 || a >= m || b < 0 && b >= n) continue;
                    if(dp[a][b] >= 0 && arr[a][b] > arr[i][j]){
                        temp += dp[a][b];
                    }
                    else if(arr[a][b] <= arr[i][j]){
                        temp += 0;
                    }
                    else{
                        cont = 0;
                        break;
                    }
                }
                if(cont){
                    dp[i][j] = temp;
                }
            }
        }
    }
    cout << dp[m-1][n-1] << endl;

    //     cout << endl;
    // for(int i = 0; i < m; i++){
    //     for(int j = 0; j < n; j++){
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }

}