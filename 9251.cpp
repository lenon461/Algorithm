#include <iostream>
#include <string>

using namespace std;

string s, t;
int main()
{
    cin >> s >> t;

    int result = 0;
    int dp[1001][1001] = {0, };
    for(int i = 1; i <= s.length(); i++){
        for(int j = 1; j <= t.length(); j++){

            if(s[i-1] == t[j-1]) dp[i][j] = dp[i-1][j-1] + 1;
            else dp[i][j] = max(dp[i][j-1] , dp[i-1][j]);

           // cout << dp[i][j] << " ";
            result = max(result, dp[i][j]);

        }
       // cout << endl;
    }
    cout << result << endl;
}
