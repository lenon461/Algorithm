#include <iostream>
#include <cstring>
#include <queue>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <vector>

using namespace std;

int memo[100];
int fibo(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;

    return fibo(n-1) + fibo(n-2);
}

int fibo2(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;
    if(memo[n] != 0) return memo[n];
    memo[n] = fibo(n-1) + fibo(n-2);
    return memo[n];

}
long long int d[100];
long long int fibo3(int n){
    d[0] = 0;
    d[1] = 1;
    for(int i = 2; i <= n; i++){
        d[i] = d[i-1] + d[i-2];

    }
    return d[n];
}

int dp[1000000];
int make1(int n){

    if(n == 1) return 0;
    if(dp[n] > 0) return dp[n];

    dp[n] = make1(n-1) + 1;


    if(n % 3 == 0){
        dp[n] = min(make1(n/3) + 1, dp[n]);

    }
    else if(n % 2 == 0){
        dp[n] = min(make1(n/2) + 1, dp[n]);
    }



    return dp[n];
}
int make1_2(int n){
    dp[1] = 0;
    for(int i = 2; i<= n; i++){
        dp[i] = dp[i-1] + 1;
        if(i % 3 == 0 && dp[i] > dp[i/3] + 1){
            dp[i] = dp[i/3] + 1;

        }
        else if(i % 2 == 0&& dp[i] > dp[i/2] + 1){
            dp[i] = dp[i/2] + 1;
        }
    }
    return dp[n];
}
int main(){

    int n;

    cin >> n;
    cout << make1_2(n);

}

