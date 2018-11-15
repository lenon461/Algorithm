#include <iostream>

using namespace std;

int main()
{

    int n, i, j, k;

    //scanf("%d",&n);
    cin >> n;

    for(j = 0; j < n; j++){

        for(i = 0; i < 2*(j+1)-1; i++){
                //안찍는경우
                if(i != 0 && (i+1) != (2*(j+1)-1) && (j+1) != n){
                    cout << " ";
                }
                else{
                    if(i == 0){
                        for(k = 0; k < n-j-1; k++){
                            cout << " ";
                        }
                    }
                    cout << "*";
                }
        }
        cout << endl;

    }

    return 0;
}

