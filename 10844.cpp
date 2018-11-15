#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;
    
    long long int d[101][10];
    for(int i = 1; i < 10; i++){

        d[1][i] = 1;
    }
    for(int i = 2; i <= n; i++){
        for(int j = 0; j < 10; j++){
            
            if(j == 0) d[i][j] =  d[i-1][j+1];
            else if(j == 9) d[i][j] = d[i-1][j-1];
            else d[i][j] = d[i-1][j-1] + d[i-1][j+1];
            d[i][j] %= 1000000000;
        }

    }
    long long int ans = 0;
    for(int k = 0; k < 10; k++){
        ans += d[n][k];
    }
    ans %= 1000000000;
    cout << ans << endl;
   // cout << d[1][0] << endl;;

    
}
