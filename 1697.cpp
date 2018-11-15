#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int n, k;
int pos[100001] = { 0,};
int dir[3] = {-1,1,0};

void in(){
    cin >> n >> k;
}

void out(int num){
    printf("%d",num);
}


int bfs(){
    
    int cur = n;

    queue<int> q;

    q.push(cur);
    pos[cur] = 1;
   

    while(!q.empty()){

        cur = q.front();
        q.pop();

        if(cur == k) break;

        for(int i = 0 ; i < 3; i++){
            
            int next_cur = cur + dir[i];
            if(i == 2) next_cur += cur;


            if(next_cur >= 0 && next_cur < 100001){
                if(pos[next_cur] == 0){
                    pos[next_cur] = pos[cur] + 1;
                }
                //else{
                 //   pos[next_cur] = min(pos[next_cur], pos[cur] + 1);
                //}
            q.push(next_cur);
            }
        }

    }
    for(int i = 1; i <= 20; i++){
        cout << ' ' <<  pos[i];
    }
    cout << endl;
    return pos[k]-1;
}

int main()
{
    in();
    out(bfs());

    return 0;
}

