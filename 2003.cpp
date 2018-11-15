#include <iostream>
#include <cstring>
#include <queue>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <vector>

using namespace std;

int c = 0;

void find(vector<int> v , int m, int l, int r, int n){

   // cout << "m : " << m << " l : " << l << " r : " << r << " n : " << n << endl;
    if(n == r) return;
    if(l <= r){

        int sum = 0;

        for(int i = l; i <= r; i++){
            sum += v[i];

        }
        //cout << sum << ' ';
        if(sum > m) find(v, m, l+1, r, n);
        else if(sum == m) {
            c = c + 1;
            find(v, m, l+1, r+1, n);
            }
        else find(v, m, l, r+1, n);
    }
    else find(v, m, l, r+1, n);

}

int main(){

    int n, m;
    int s;
    vector<int> v;

    cin >> n >> m;

    for(int i = 0; i < n; i++){
        cin >> s;
        v.push_back(s);
    }

    int l = 0;
    int r = 0;
    int sum = v[0];
    int count = 0;
    while( l <= r && r < n){
          //  cout << l << '@' << r << '/' << sum <<endl;
        if(sum < m){
            r++;
            sum += v[r];
        }
        else if(sum == m){
            count++;
            r++;
            sum += v[r];
        }
        else if(sum > m){
            sum -= v[l];
            l++;
            if(l > r){
                r++;
                sum = v[r];
            }
        }
    }

    cout << count;

    return 0;

}

