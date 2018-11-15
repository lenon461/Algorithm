#include <iostream>
#include <cstring>
#include <queue>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <vector>

using namespace std;

bool check(string s){
    int mo = 0;
    int ja = 0;
    for(int i = 0; i <s.size(); i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' ||
            s[i] == 'o' || s[i] == 'u'){
           mo++;
        }
        else{
            ja++;
        }

    }
    return ja > 1 && mo > 0;
}

void go(int t, vector<char> &a, int i, string s){


    if(t == 0){
        if(check(s)){
            cout << s << '\n';
        }
        return;
    }
    if(t > 0){
        if(i >= a.size()) return;
        go(t - 1, a, i+1, s + a[i]);
        go(t, a, i+1, s);
    }

}
int main() {

    int n, m;
    cin >> n >> m;

    vector<char> a(m);
    for (int i=0; i<m; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    //a c i s t w

    go(n, a, 0, "");


    return 0;
}

