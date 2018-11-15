#include <iostream>
#include <cstring>
#include <queue>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <vector>

#include <cstdio>

using namespace std;

int go(int n){
    int temp = 0;
    int ans = n;

    for(int i = 0; i <= n/3; i++){
        for(int j = 0; j <= n/5; j++){
            if( 3 * i + 5 * j == n){
                temp = i + j;
                ans = min(ans, temp);
            }
        }
    }
    if(ans == n) return -1;
    else return ans;
}

int main(){

    int n;

    cin >> n;

    cout << go(n);

}

