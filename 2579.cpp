#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
 
    int n;
    cin >> n;
    vector<int> s(n+1);
    
    for(int j = 1; j<=n; j++){
        cin >> s[j];
    }

    
    int d[301][3] = {{0,}}; 

    d[1][1] = s[1];
    d[1][2] = s[1];
    d[2][1] = s[2];
    d[2][2] = s[1] + s[2];

    for(int i = 3; i<=n; i++){

        d[i][1] = max(d[i-2][1],d[i-2][2]) + s[i];
        d[i][2] = d[i-1][1] + s[i];
    }

    int ans = max(d[n][1],d[n][2]);
    cout << ans;

}
