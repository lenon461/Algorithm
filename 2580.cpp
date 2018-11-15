#include <iostream>
#include <cstring>
#include <queue>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <vector>

using namespace std;

bool checkrow[10][10] = {0};
bool checkcol[10][10] = {0};
bool checkbox[10][10] = {0};

int indextoNum(int index){

    return ((index/9)/3)*3+((index%9)/3) + 1;
}
vector<int> v;

void sudoku(vector<int> temp, int index){



    if(index == 81){
        v = temp;
        //cout << "find!" << '\n';
          for(int i = 0; i < 81; i++){
            cout << temp[i] << ' ';
            if((i+1)%9 == 0) cout << '\n';
        }
        return;
    }

    if(temp[index] != 0) sudoku(temp, index + 1);
    else{
            for(int k = 1; k < 10; k++){
                if(checkrow[index/9][k] == 0 && checkcol[index%9][k] == 0 && checkbox[indextoNum(index)][k] == 0){
                    temp[index] = k;
                    checkrow[index/9][k] = true;
                    checkcol[index%9][k] = true;
                    checkbox[indextoNum(index)][k] = true;


                    sudoku(temp, index +1);

                    temp[index] = 0;
                    checkrow[index/9][k] = false;
                    checkcol[index%9][k] = false;
                    checkbox[((index/9)/3)*3+((index%9)/3)+1][k] = false;

                }
        }
    }


}

int main(){



    int k;


    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){

        cin >> k;
        v.push_back(k);
        if(k != 0){
            checkrow[i][k] = true;
            checkcol[j][k] = true;
            checkbox[indextoNum(i*9+j)][k] = true;
        }


        }
    }

    //cout << "start" << '\n';
    sudoku(v,0);






    return 0;
/*
    v.push_back(0);v.push_back(3);v.push_back(5);
    v.push_back(4);v.push_back(6);v.push_back(9);
    v.push_back(2);v.push_back(7);v.push_back(8);

    v.push_back(7);v.push_back(8);v.push_back(2);
    v.push_back(1);v.push_back(0);v.push_back(5);
    v.push_back(6);v.push_back(0);v.push_back(9);

    v.push_back(0);v.push_back(6);v.push_back(0);
    v.push_back(2);v.push_back(7);v.push_back(8);
    v.push_back(1);v.push_back(3);v.push_back(5);

    v.push_back(3);v.push_back(2);v.push_back(1);
    v.push_back(0);v.push_back(4);v.push_back(6);
    v.push_back(8);v.push_back(9);v.push_back(7);

    v.push_back(8);v.push_back(0);v.push_back(4);
    v.push_back(9);v.push_back(1);v.push_back(3);
    v.push_back(5);v.push_back(0);v.push_back(6);

    v.push_back(5);v.push_back(9);v.push_back(6);
    v.push_back(8);v.push_back(2);v.push_back(0);
    v.push_back(4);v.push_back(1);v.push_back(3);

    v.push_back(9);v.push_back(1);v.push_back(7);
    v.push_back(6);v.push_back(5);v.push_back(2);
    v.push_back(0);v.push_back(8);v.push_back(0);

    v.push_back(6);v.push_back(0);v.push_back(3);
    v.push_back(7);v.push_back(0);v.push_back(1);
    v.push_back(9);v.push_back(5);v.push_back(2);

    v.push_back(2);v.push_back(5);v.push_back(8);
    v.push_back(3);v.push_back(9);v.push_back(4);
    v.push_back(7);v.push_back(6);v.push_back(0);
*/



}

