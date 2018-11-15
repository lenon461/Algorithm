#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    int n;

    cin >> n;

    vector<int> d(n+1);
    d[0] = 0;

    for(int i = 1; i <=n; i++){
        d[i] = i;
        for(int j = 1; j*j <= i; j++){
           if( d[i] > d[i-j*j] + 1){ 
               d[i] = d[i-j*j] + 1;
           }

        }
    }   

    cout << d[n];


    return 0;

}

