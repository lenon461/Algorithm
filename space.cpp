#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int min(int a, int b){
  if( a > b) return b;
  else return a;
}
int main(){

  int t;
  cin >> t;
  for(int cas = 0; cas < t; cas++ ){


    int n, m, r1, c1, r2, c2;

    cin >> n >> m >> r1 >> c1 >> r2 >> c2;

    int x, y;  // 3 4 ,  2 0
    
    int sx = min(c1,c2);  //2 
    int fx = max(c2,c1);  //3
    
    int sy = min(r1,r2);  //0
    int fy = max(r2,r1);  //4

    y = min(fy-sy, n-fy+sy);
    x = min(fx-sx, m-fx+sx);
    cout << "#" << cas+1 << ' ' << x+y << endl;
  }
    return 0;
}
