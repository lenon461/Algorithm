#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

void selectionSort(vector<long long> arr, int size)
{
  for(int i = 0 ; i < size - 1 ; i++) {
    for (int j = i + 1 ; j < size ; j++) {
       if(arr[i] > arr[j]) {
         int temp = arr[i];
         arr[i] = arr[j];
         arr[j] = temp;
         //swap(arr[i], arr[j]);
       }

      }
     }
}


int main(){


    int t;
    cin >> t;

    for(int c = 0; c < t; c++){

      int n, p, m;
      vector<long long> v;

      cin >> n >> p >> m;

      v.clear();

      for(int i = 0; i < n; i++){
          //cin >> v[i];
          long long x;
          cin >> x;
          v.push_back(x);
      }

      //sort(v.begin()+1, v.end(), greater<int>());
      selectionSort(v,n);
      for(int i = 0; i < n; i++){
          cout << v[i] << ' ';
      }


      cout << endl;


      int ans = v[0];

      for(int j = 1; j <= p; j++){
          ans += v[j];
      }
      for(int k = p+1; k < n; k++){
          ans -= v[k];
      }

      cout << '#' << c+1 << ' ' << ans << endl;
    }

    return 0;
}
