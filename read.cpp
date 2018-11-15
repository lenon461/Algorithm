#include <iostream>
#include <vector>

using namespace std;

int main(){

    int t;
    int n, s, j, k;
    cin >> t;
    
    int cou = 1;

    while(t > 0){
        
        int temp = 0;
        cin >> n >> s >> j >> k;
        
        vector<int> v(k);
        
        for(int i = 0; i < k; i++){
           cin >> v[i];
        }   

        for(int i = s; i <= n; i += j+1){
            for(int u = 0; u < k; u++){
                if(v[u] == i) temp++;
            }
        }
        cout << "#" << cou++ << ' ' << temp << endl;
        t--;    
    }
}
