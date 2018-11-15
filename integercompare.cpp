#include <iostream>

using namespace std;

int intcmp(int a, int b);
int main()
{
    int n, m;
    cin >> n >> m;

    int temp = intcmp(n,m);
    if(temp) cout << "good"  << endl;
    else cout << "bad"  << endl;

    return 0;
}

int intcmp(int a, int b){

    
    if(a & b) return 1;
    else return 0;
}
