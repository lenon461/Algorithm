#include <iostream>
#include <cstdlib>

using namespace std;

int time(int _seg[7]){

    int num1[] = {0,0,0,0,1,1,0};
    int num2[] = {1,0,1,1,0,1,1};
    int num3[] = {1,0,0,1,1,1,1};
    int num4[] = {0,1,0,0,1,1,1};
    int num5[] = {1,1,0,1,1,0,1};
    int num6[] = {1,1,1,1,1,0,1};
    int num7[] = {1,0,0,0,1,1,0};
    int num8[] = {1,1,1,1,1,1,1};
    int num9[] = {1,1,0,1,1,1,1};
    int num0[] = {1,1,1,1,1,1,0};

    for(int i = 0; i < 7; i++){
        if(_seg[i] != num1[i]) break;
        if(i == 6) return 1;
    }

    for(int i = 0; i < 7; i++){
        if(_seg[i] != num2[i]) break;
        if(i == 6) return 2;
    }
    for(int i = 0; i < 7; i++){
        if(_seg[i] != num3[i]) break;
        if(i == 6) return 3;
    }
    for(int i = 0; i < 7; i++){
        if(_seg[i] != num4[i])  break;
        if(i == 6) return 4;
    }
    for(int i = 0; i < 7; i++){
        if(_seg[i] != num5[i])  break;
        if(i == 6) return 5;
    }
    for(int i = 0; i < 7; i++){
        if(_seg[i] != num6[i]) break;
        if(i == 6) return 6;
    }
    for(int i = 0; i < 7; i++){
        if(_seg[i] != num7[i]) break;
        if(i == 6) return 7;
    }
    for(int i = 0; i < 7; i++){
        if(_seg[i] != num8[i]) break;
        if(i == 6) return 8;
    }
    for(int i = 0; i < 7; i++){
        if(_seg[i] != num9[i]) break;
        if(i == 6) return 9;
    }
    for(int i = 0; i < 7; i++){
        if(_seg[i] != num0[i])  break;
        if(i == 6) return 0;
    }
    return -1;
}
int main(){

  int n;
  int seg[7];
  int cur_time[4];

  cin >> n;

  while(n--){
    for(int j = 0; j < 4; j++){
      for(int i = 0; i < 7; i++){
        cin >> seg[i];
      }
      cur_time[j] = time(seg);
    }
    
   /* for(int k = 0; k < 4; k++){

        cout << cur_time[k] << " ";
    }
    cout << endl;
    */


  }





    return 0;
}
