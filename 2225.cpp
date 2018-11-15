#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    int n;
    cin >> n;

    vector<int> v(n);
    vector<int> d(n);

    while(n--){

        cin >> v[n];
    }

    
    for(int i = 0; i<v.size(); i++){

        d[i] = v[i];
        if ( i == 0) continue;

        if(d[i] < d[i-1] + v[i]){
            d[i] = d[i-1] + v[i];
        }
        /*for(int j = i-1; j<v.size(); j++){

            temp += v[j];
            d[i] = max(d[i], temp);
        }*/
        
    }
    int k = 0;
    int ans =d[0];
    while(k < v.size()){
        ans = max(ans, d[k]);
        k++;
     //   cout << d[k] << " ";
    }
    cout << ans << endl;


}
