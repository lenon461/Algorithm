/*

You should use the standard input/output



in order to receive a score properly.



Do not use file input and output



Please be very careful. 

*/



#include <iostream>



using namespace std;



int Answer;



int main(int argc, char** argv)

{

	int T, test_case;
	cin >> T;

    int l, r, n;
    int poll[100000][2];

	for(test_case = 0; test_case  < T; test_case++)
	{
		Answer = 0;

        cin >> l >> r;
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> poll[i][0] >> poll[i][1];
        }
        for(int i = l; i <= r; i++){
            //bigger check
            //(y,x)
            int centerY = 0;
            int centerX = i;
            int distance = 2;
            for(int j = 0; j < distance; j++){
                int tempY = centerY - distance/2;
                int tempX = centerX - distance/2;
                

                arr[centerY][centerX] 

            }

        }


		cout << "Case #" << test_case+1 << endl;

		cout << Answer << endl;
	}



	return 0;//Your program should return 0 on normal termination.

}
