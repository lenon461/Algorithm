#include <iostream>
#include <vector>

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

    vector<vector<int>> space;

    for(int i = 0; i < n; i++){
        vector<int> ele(m);
        space.push_back(ele);
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            space[i][j] = -1;
        }
    //    cout << endl;
    }

    //        a
    //  b   [i,j]   c
    //        d
    int one = 1;
    int two = 1;
    while(two-- > 0){
      for(int i = r1;;){

          for(int j = c1;;){

              if(i == r1 && j == c1) space[i][j] = 0;
              else {
                  int a, b, c, d;

                  if(i - 1 < 0) a = space[n-1][j];
                  else a = space[i-1][j];

                  if(j - 1 < 0) b = space[i][m-1];
                  else b = space[i][j-1];

                  if(j + 1 > m - 1) c = space[i][0];
                  else c = space[i][j+1];

                  if(i + 1 > n - 1) d = space[0][j];
                  else d = space[i+1][j];

                  if(a != -1) space[i][j] = a+1;
                  if(b!= -1) space[i][j] = b+1;
                  if(c!= -1) space[i][j] = c+1;
                  if(d!= -1) space[i][j] = d+1;
                  if(a!= -1) space[i][j] = min(space[i][j],a+1);
                  if(b!= -1) space[i][j] = min(space[i][j],b+1);
                  if(c!= -1) space[i][j] = min(space[i][j],c+1);
                  if(d!= -1) space[i][j] = min(space[i][j],d+1);

                  //space[i][j] = min(min(a + 1, b + 1) , min(c + 1, d + 1));
                  //space[i][j] = min(min(min(space[i-1][j] + 1, space[i][j-1] + 1), space[i+1][j] + 1), space[i][j+1] + 1);
              }

              j++;
              if(j == m) j = 0;
              if(j == c1) break;
          }
              i++;
              if(i == n) i = 0;
              if(i == r1) break;
      }

    }while(one-- > 0){
      for(int i = r1;;){

          for(int j = c1;;){

              if(i == r1 && j == c1) space[i][j] = 0;
              else {
                  int a, b, c, d;

                  if(i - 1 < 0) a = space[n-1][j];
                  else a = space[i-1][j];

                  if(j - 1 < 0) b = space[i][m-1];
                  else b = space[i][j-1];

                  if(j + 1 > m - 1) c = space[i][0];
                  else c = space[i][j+1];

                  if(i + 1 > n - 1) d = space[0][j];
                  else d = space[i+1][j];

                  if(a != -1) space[i][j] = a+1;
                  if(b!= -1) space[i][j] = b+1;
                  if(c!= -1) space[i][j] = c+1;
                  if(d!= -1) space[i][j] = d+1;
                  if(a!= -1) space[i][j] = min(space[i][j],a+1);
                  if(b!= -1) space[i][j] = min(space[i][j],b+1);
                  if(c!= -1) space[i][j] = min(space[i][j],c+1);
                  if(d!= -1) space[i][j] = min(space[i][j],d+1);

                  //space[i][j] = min(min(a + 1, b + 1) , min(c + 1, d + 1));
                  //space[i][j] = min(min(min(space[i-1][j] + 1, space[i][j-1] + 1), space[i+1][j] + 1), space[i][j+1] + 1);
              }

              j--;
              if(j == -1) j = m-1;
              if(j == c1) break;
          }
              i--;
              if(i == -1) i = n-1;
              if(i == r1) break;
      }

    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << space[i][j] << ' ';
        }
        cout << endl;
   }
   
    cout << "#" << cas+1 << ' ' << space[r2][c2] << endl;
    space.clear();
  }

    return 0;
}
