#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;

    int box[1001];
    for(int i = 0; i < n; i++){

        cin >> box[i];
    }

    int result = 0;
    int dp[1001] = {1, };
    for(int i = 0; i < n; i++){

        dp[i] = 1;
        for(int j = 0; j < i; j++){

            if(box[i] > box[j]){
                
                dp[i] = max(dp[j] + 1, dp[i]); 
            }
        }
        result = max(result, dp[i]);
        // cout << dp[i] << " ";
    }
    cout << result << endl;

}