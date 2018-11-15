#include <iostream>
#include <vector>

using namespace std;


int main()
{
//    int land[10][10];
int t;

cin >> t;
for(int c = 1; c <= t; c++){

    vector<vector<int>> land;

    bool landkind[4] = {0};//wasteland, water, mountain, grassland;
    int count = 0;

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        vector<int> ele(n);
        land.push_back(ele);
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> land[i][j];
        }
    }

    vector<int> check(9);
    check.clear();
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){

            if(i > 0 && j > 0) check.push_back(land[i-1][j-1]);
            if(i > 0) check.push_back(land[i-1][j]);
            if(i > 0 && j < n-1) check.push_back(land[i-1][j+1]);
            if(j > 0) check.push_back(land[i][j-1]);
            check.push_back(land[i][j]);
            if(j < n-1) check.push_back(land[i][j+1]);
            if(i < n-1 && j > 0) check.push_back(land[i+1][j-1]);
            if(i < n-1) check.push_back(land[i+1][j]);
            if(i < n-1 && j < n-1) check.push_back(land[i+1][j+1]);


      //      cout << "check : ";
            for(int x = 0; x < check.size(); x++){
    //            cout << check[x] << " ";
            }
        //    cout << '@'<<  check.size()  <<endl;

            for(int k = 0; k < check.size(); k++){
                if(check[k] == 0) landkind[0] = true;
                if(check[k] == 1) landkind[1] = true;
                if(check[k] == 2) landkind[2] = true;
                if(check[k] == 3) landkind[3] = true;


            }

            for(int x = 0; x < 4; x++){
//                cout << landkind[x] << " ";
            }
  //          cout << endl;

            if( !landkind[0] && landkind[1] && landkind[2] && landkind[3]){
                count++;
            }

            landkind[0] = false; //wasteland, water, mountain, grassland;
            landkind[1] = false; //wasteland, water, mountain, grassland;
            landkind[2] = false; //wasteland, water, mountain, grassland;
            landkind[3] = false; //wasteland, water, mountain, grassland;

            check.clear();
        }
    }

    cout << '#' << c << ' ' << count << endl;

    }



}
