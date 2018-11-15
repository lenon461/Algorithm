#include <iostream>
#include <vector>

using namespace std;

int main(){

    int t;
    int a, b;
    cin >> t;

    int cou = 1;

    while(t > 0){

        int atemp = 0;
        int btemp = 0;

        cin >> a >> b;

        if(a > 21 || a == 0){
          atemp = 0;
        }
        else{
          if (a == 1) atemp = 5000000;
          else if (a >= 2 && a <= 3) atemp = 3000000;
          else if (a >= 4 && a <= 6) atemp = 2000000;
          else if (a >= 7 && a <= 10) atemp = 500000;
          else if (a >= 11 && a <= 15) atemp = 300000;
          else if (a >= 16 && a <= 21) atemp = 100000;
        }

        if(b > 31 || b == 0){
          btemp = 0;
        }
        else{
          if (b == 1) btemp = 5120000;
          else if (b >= 2 && b <= 3) btemp = 2560000;
          else if (b >= 4 && b <= 7) btemp = 1280000;
          else if (b >= 8 && b <= 15) btemp = 640000;
          else if (b >= 16 && b <= 31) btemp = 320000;

          t--;
        }

        cout << atemp + btemp << endl;
        t--;
    }
}
