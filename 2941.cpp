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
int find(string s){

    int temp = 0;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'c' && s[i+1] == '=') temp++;
        if(s[i] == 'c' && s[i+1] == '-') temp++;
        if(s[i] == 'd' && s[i+1] == 'z' && s[i+2] == '=') temp++;
        if(s[i] == 'd' && s[i+1] == '-') temp++;
        if(s[i] == 'l' && s[i+1] == 'j') temp++;
        if(s[i] == 'n' && s[i+1] == 'j') temp++;
        if(s[i] == 's' && s[i+1] == '=') temp++;
        if(s[i] == 'z' && s[i+1] == '=') temp++;
    }


    return s.size() - temp;
}

int main(){

    string s;

    cin >> s;

    cout << find(s);

}

