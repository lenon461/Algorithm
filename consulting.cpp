#include <iostream>
#include <vector>

using namespace std;

void go(vector<vector<int>> space,int n, int k, int l, int x);
void check(vector<vector<int>> space, int n);
vector<int> ans;
int ans_num = 0;

int main()
{

    int n, k, l;
    cin >> n >> k >> l;

    vector<vector<int>> space(n);

    int s, q;
    for(int i =0; i < n; i++){
        cin >> s >> q;
        vector<int> ele(s);
        for(int j = 0; j < s; j++){
            ele[j] = q * (-1); //* j;
        }
        space[i] = ele;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < space[i].size(); j++){

            cout << space[i][j] << ' ';
        }
        cout << endl;
    }
    cout << '@';

    //check(space, 1);
    //cout << ans.front();
    //cout << check(space, n);
    go(space, n, k, l, 0);

    int result = ans[0];

    for(int i = 0; i < ans.size(); i++){
      if(result < ans[i]) result = ans[i];

    }
    cout << "RES: " << result << endl ;
    //go(space, 8, 5, 30, 0)
}
void check(vector<vector<int>> space, int n){
  for(int i = 0; i < n; i++){
      if(space[i][0] != 0) continue;

      for(int j = 0; j < space[i].size(); j++){

        ans_num += space[i][j];
      }
      cout << endl;
  }
  ans_num += n * 10;
  ans.push_back(ans_num);
  cout << "o";
}

void go(vector<vector<int>> space, int n, int k, int l, int x){
  //고객의 수 : N / 최소 상담 시간 : K / 근무시간 : L // 현재 상담중인 고객넘버인덱스 : x /

  //0 0 0 0 0 0 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1
  //-2 -2 -2 -2 -2 -2 -2 -2 -2 -2 -2 -2
  //-1 -1 -1 -1 -1 -1
  //-1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1
  //-3 -3 -3 -3 -3 -3 -3 -3
  //-2 -2 -2 -2 -2 -2 -2 -2 -2 -2 -2 -2 -2 -2 -2
  //-2 -2 -2 -2 -2 -2 -2 -2 -2 -2 -2
  //-1 -1 -1 -1 -1 -1 -1

  //시간이 남아있지 않으면 종료. 더이상 손님이 없으면 종료. 상담한 손님수 * 10 + space 남은요소
  //하나도 안채워져 있으면 5개를 채우거나, 다음손님 넘어가거나
  //채워져있으면 하나씩 채우거나 다음손님 넘어가거나

  if(x == n || k > l){ //손님이 끝났거나 상담시간이 안남았거나
    if(k <= l) {
      space.clear();
      return;
    } // 손님이 끝났는데 상담시간이 많이 남았으면 리턴 0
    else { //
      check(space, n);
      cout << 'c';
      space.clear();
      return;
    }
  }
  for(int i = x; i < n; i++){
    cout << 'a';

    if(space[x][0] != 0){ // 새 손님인 경우
      vector<vector<int>> temp = space;
      for(int h = 0; h < 5; h++){
        temp[x][h] = 0;
      }
      go(temp, n, k, l-5, x);
    }
    else{ //상담 하던 손님인경우
      int h;
      for(h = 0; h < space[i].size(); h++){
        if(space[x][h] != 0) break;
      }
      cout << h;
      if(h == space[i].size()){ //고객이 더이상 상담을 원하지 않는경우
        go(space, n, k, l, x+1);
        cout << endl << 'b';
      }
      else{
        cout << 'c' ;
        int pass = space[x][h];
        space[x][h] = 0;
        go(space, n, k, l-1, x);
        cout << 'X' << endl;
        space[x][h] = pass;
        go(space, n, k, l, x+1);

      }

    }
  }

  //go(space, n, k, l-5, x); // 새로 시작한 손님
  //go(space, n, k, l-1, x); // 시간 연장 손님
  //go(space, n, k, l, x+1); // 다음 손님

}
