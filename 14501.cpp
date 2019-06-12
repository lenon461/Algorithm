#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int N;
    cin >> N;

    int T[N+1], P[N+1];
    int dp[N+1] = {0, };
    for(int i = 1; i <= N; i++){
        cin >> T[i] >> P[i];
        dp[i] = P[i];
    }

    int result = 0;
    
    for(int i = 2; i <= N; i++){
        for(int j = 1; j < i; j++){
            if(i + T[i] <= N+1 && T[j] + j <= i)
                dp[i] = max(dp[j] + P[i], dp[i]); 
        }
    }

    for(int i = 1; i <= N; i++){
        cout << dp[i] << " ";
    }
    cout << endl;
        int max = 0;

    for (int i = 1; i <= N; i++) {
        if (i + T[i] <= N + 1) {
            cout << dp[i] << " ";
            if (max < dp[i]) {
                max = dp[i];
            }
        }
        else{
            cout << "0 ";

        }
    }
    cout << max;
}
