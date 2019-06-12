#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    
    	ios::sync_with_stdio(false);
	cin.tie(0);

    int T;
    cin >> T;

    while(T){
    

        int n;
        cin >> n;

        int point[2][n];
        for(int j = 0; j < 2; j++){
            for(int i = 0; i < n; i++){
                int p;
                cin >> p;
                point[j][i] = p;
            }
        }
        int dp[2][n] = {0, };

        dp[0][0] = point[0][0];
        dp[1][0] = point[1][0];

        for(int i = 1; i < n; i++){
            dp[0][i] = max(dp[1][i-1] + point[0][i], dp[0][i-1]);
            dp[1][i] = max(dp[0][i-1] + point[1][i], dp[1][i-1]);
        }

        cout << endl << max(dp[1][n-1], dp[0][n-1]) << endl;

        T--;
    }
}
