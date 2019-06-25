
#include <iostream>
#include <math.h>
using namespace std;
double Answer;



int main(int argc, char** argv)
{
	int T, test_case;
    int R, S, E;
    int n, l, r, h;

    cin >> T;
	for(test_case = 0; test_case  < T; test_case++)
	{

        cin >> R >> S >> E;
        cin >> n;

        int centerPos = S;
        double temp;
        Answer = 0;
        for(int i = 0; i < n; i++){
            cin >> l >> r >> h;

            if(h >= 2*R){
                temp = l - R - centerPos + (h - R) * 2 + r - l + R * 3.14159265359;
                Answer += temp;
                centerPos = r + R;
            }
            else{
                temp = l - R - centerPos;
                
                double a = temp; 
                //(temp,R) , (l,h+R);
                double distance = sqrt(pow(l - temp, 2) + pow(h, 2));
                double theta = acos( (2 * R * R - a * a)/(2*R*R) );
                temp += r - l + theta * R * 2;
                Answer += temp;
                centerPos = r + R;
            }
        }
        Answer += E - centerPos;
        cout << acos(1/2) << " @" <<  endl;
		cout << "Case #" << test_case+1 << endl;
        cout.setf(ios::fixed);

        cout.precision(6);
		cout << Answer << endl;

	}



	return 0;//Your program should return 0 on normal termination.

}
