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



	cin >> T;

    int dp[10001] = {0,};
    int fibo[10001] = {0, };


    for(int i = 1; i <= 10001; i++){
        fibo[i] = fibo[i-1] + i;
        dp[i] = dp[i-1] + 1;
        
        for(int j = 1; j <= i; j++){
            if(i == fibo[j])
                dp[i] = j;
            else if(i - fibo[j] > 0)
                dp[i] = min(dp[i], dp[i-fibo[j]] + j);
            
        }

//        cout << dp[i] << " ";

    }

	for(test_case = 0; test_case  < T; test_case++)

	{


        int n1, n2;
        cin >> n1 >> n2;

		Answer = 0;


		
        for(int k = n1; k <= n2; k++){
            Answer = max(Answer, dp[k]);
        }

		// Print the answer to standard output(screen).

		cout << "Case #" << test_case+1 << endl;

		cout << Answer << endl;

	}



	return 0;//Your program should return 0 on normal termination.

}
