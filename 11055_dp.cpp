#include <iostream>

using namespace std;

int main(){
    
    int n;
    cin >> n;

    int arr[1001];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int result = 0;
    int dp[1001];
    for(int i = 0; i < n; i++){
        dp[i] = arr[i];
        for(int j = 0; j <= i; j++){
            if(arr[j] < arr[i]){

                dp[i] = max(dp[j] + arr[i], dp[i]);
            }
            if(result < dp[i]) result = dp[i];

        }
    }
    cout << result;
}
