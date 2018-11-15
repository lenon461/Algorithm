#include <iostream>
#include <cstring>
#include <queue>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <vector>

using namespace std;
int cnt = 0;

void backtracking(int answer, int current, vector<int> v, int index){

    int temp;
    if(index == v.size()) return;


    temp = v[index];
    if(answer == current + temp) cnt++;

    backtracking(answer, current + temp, v, index+1);
    backtracking(answer, current, v, index+1);
/*
    if(answer == current){
        cout << answer << " : " << current << '\n';
        cnt++;
        if(index == v.size()) return;
        else {
            temp = v[index];
            backtracking(answer, current + temp, v, index+1);
            backtracking(answer, current, v, index+1);
        }
    }
    else{
        if(index == v.size()) return;
        temp = v[index];
        backtracking(answer, current + temp, v, index+1);
        backtracking(answer, current, v, index+1);

    }
*/
}

int main(){


    int n, s, k;
    vector<int> v;

    cin >> n >> s;

    for(int i = 0; i < n; i++){
        cin >> k;
        v.push_back(k);
    }
    //cout << s << '\n';
    backtracking(s, 0, v, 0);
    cout << cnt;




    return 0;
}

