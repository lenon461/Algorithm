#include <iostream>
#include <utility>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main(){
    
    int n;
    cin >> n;

    int arr[1001];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    map<int,int> m;
    m.insert(make_pair(arr[0],arr[0]));

    int result = 0;

    for(int i = 1; i < n; i++){

        int current = arr[i];

        for(auto j = m.begin(); j != m.end(); j++){
            
            int prev = (*j).first;
            int value = (*j).second;

            if(prev < current){
               
                if(m[current]){
                    m[current] = max(value + current, m[current]);
                }
                else{
                    m[current] = value + current;
                }
            }
        }
    }

    for(auto j = m.begin(); j != m.end(); j++){
        cout << (*j).first << " " << (*j).second << endl;
       result = max(result, (*j).second);
    }
    cout << result << endl;
}
