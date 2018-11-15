#include <iostream>
#include <cstring>
#include <queue>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <vector>

using namespace std;

int main(){

    char s[1000000];
    int count = 1;

    cin.getline(s, 1000000, '\n');

    for(int i = 0; i < sizeof(s)/sizeof(s[0]); i++){
        //if(s[0] == ' ') count--;
        if(s[i] == NULL) {
            if(s[i-1] == ' ') count--;
            break;
        }
        if(s[i] == ' ' && i != 0){
            count++;
            //cout << s[i];
        }
    }
  //  cout << sizeof(s)/sizeof(s[0]);

    cout << count;

}

