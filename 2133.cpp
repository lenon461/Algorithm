#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>

using namespace std;

int main(){


    int n;

    cin >> n;

    int d[31] ={ 0};

    d[0] = 1; d[1] = 0;
    d[2] = 3; d[3] = 0;
    for(int i = 4; i<=n; i++){
        if(i%2 == 1) continue;
        d[i] = d[i-2] *3;
        for(int j = 4; i-j >= 0; j+=2){
            
            d[i] += d[i-j]*2;
    
        }
    }


    cout << d[n];
    


    return 0;
}
