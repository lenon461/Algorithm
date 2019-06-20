#include <iostream>

using namespace std;

int main(){
    
    int n;
    cin >> n;

    int arr[1000];
    int dp[1000];
    int result = 0;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++){

        dp[i] = 1;

        for(int j = 0; j < i; j++){
            
            if(arr[i] < arr[j]){
                dp[i] = max(dp[j] + 1, dp[i]);
            }
        }
        result = max(result, dp[i]);
    }
    cout << result;
//    for(int i = 0; i < n; i++){
//        cout << dp[i] << " ";
//    }
}
