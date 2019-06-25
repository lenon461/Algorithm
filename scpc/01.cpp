/*
You should use the standard input/output

in order to receive a score properly.

Do not use file input and output

Please be very careful.
*/

#include <iostream>

using namespace std;

long long Answer;

int main(int argc, char** argv)
{
	int T, test_case;
	/*
	   The freopen function below opens input.txt file in read only mode, and afterward,
	   the program will read from input.txt file instead of standard(keyboard) input.
	   To test your program, you may save input data in input.txt file,
	   and use freopen function to read from the file when using cin function.
	   You may remove the comment symbols(//) in the below statement and use it.
	   Use #include<cstdio> or #include <stdio.h> to use the function in your program.
	   But before submission, you must remove the freopen function or rewrite comment symbols(//).
	 */

	// freopen("input.txt", "r", stdin);
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int dp[1000001] = {0,};
    dp[0] = 0;
    dp[1] = 0;
    dp[2] = 1;


    for(int i = 3; i <= 100000; i+=2){
        dp[i+1] = dp[(i+1)/2] + 1;
        dp[i] = dp[i+1] + 1;  

    }

	cin >> T;
	for(test_case = 0; test_case  < T; test_case++)
	{

		Answer = 0;
        int n1, n2;
        cin >> n1 >> n2;

        for(int i = n1; i <= n2; i++){
            Answer += dp[i];
//            cout << dp[i] << " " << dp[i+1] << " ";
        }

		cout << "Case #" << test_case+1 << endl;
		cout << Answer << endl;
	}

	return 0;//Your program should return 0 on normal termination.
}
