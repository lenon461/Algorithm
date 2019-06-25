/*
You should use the standard input/output

in order to receive a score properly.

Do not use file input and output

Please be very careful.
*/

#include <iostream>
#include <map>

using namespace std;

long Answer;
map<int, int> list;
map<int, int> sum;

void goo(){

      for(int i =3 ; i <= 1000000 ; i++) {
         if(i % 2 == 0) {
            list[i] = list[i/2] +1;
            list[i-1] = list[i] +1;
         }
      }
}
void foo(){
    sum[2] = 1;
      for(int i = 3 ; i <= 1000000; i++) {
         sum[i] = list[i] + sum[i-1];
      }
   
}
int main(int argc, char** argv)
{
	int T, test_case;
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    list[0] = 0;
    list[1] = 0;
    list[2] = 1;

    goo();
    foo();
	cin >> T;
	for(test_case = 0; test_case  < T; test_case++)
	{

		Answer = 0;
        int n1, n2;
        cin >> n1 >> n2;

        cout << sum[n2] - sum[n1];

		cout << "Case #" << test_case+1 << endl;
		cout << Answer << endl;
	}

	return 0;//Your program should return 0 on normal termination.
}
