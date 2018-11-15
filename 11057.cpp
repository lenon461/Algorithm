#include <iostream>
#include <string.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    
    long long d[1001][10];
    for(int i = 0; i < 1001; i++){
        for(int j = 0; j < 10; j++){
            d[i][j] = 0;
        }
    }

    for(int i = 0; i < 10; i++){

        d[1][i] = 1;
    }
    for(int i = 2; i <= n; i++){
        for(int j = 0; j < 10; j++){
            for(int k = 0; k <= j; k++){

                d[i][j] += d[i-1][k];
                }
                //d[i][j] %= 10007;
        }


    }
    long long ans = 0;
    for(int k = 0; k < 10; k++){
        ans += d[n][k];
    }
    ans %= 10007;
    cout << ans << endl;
   // cout << d[1][0] << endl;;

    
}
