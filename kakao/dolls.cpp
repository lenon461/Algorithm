#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

long double average(vector<int> v, int a, int b){
  long double temp = 0;

  for(int i = a; i < b; i++){
    temp += v[i];
  }
  return temp/(b-a);

}

long double distribute(vector<int> v, int k, int n){

  long double res = -1;
  for(int j = 0; j + k <= n; j++){

    long double m = average(v, j, j+k);

    long double temp = 0;

    int i;
    for(i = j; i < j+k; i++){
      temp += (v[i] - m)*(v[i] - m);
    }

    temp = temp/k;

    if(res == -1) res = temp;

    //cout << temp << endl;

    res = min(res, temp);
  }
  //cout << " dis res : " << res << endl;
  return res;
}

int main(){

    int n, k;
    cin >> n >> k;

    vector<int> v(n);

    for(int i = 0; i < n; i++){
      cin >> v[i];
    }
    long double res = distribute(v, k, n);
    for(int i = k+1; i <=n; i++){
      long double temp = distribute(v, i, n);
      res = min(temp, res);
      cout << "min : " << temp << endl;
    cout << sqrtl(res) << endl;
    }
    cout << sqrtl(res) << endl;

}
