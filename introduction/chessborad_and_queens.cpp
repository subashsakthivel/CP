#include <bits/stdc++.h>
using namespace std;
int numberOfWays=0;
const int N =8;
string chessBorad[N];
bool column[N], leftDiagnal[2*(N-1)] , rightDiagnal[2*(N-1)];
void solution(int r) {
    if(r==N) {
        numberOfWays++;
        return;
    }
    for(int c=0;c<N;c++) {
        if(column[c]==0 && leftDiagnal[c-r + N-1] ==0 && rightDiagnal[c+r]==0 && chessBorad[r][c]=='.') {
            column[c] = leftDiagnal[c-r + N-1] = rightDiagnal[c+r] = true;
            solution(r+1);
            column[c] = leftDiagnal[c-r + N-1] = rightDiagnal[c+r] = false;
        }
    }
}


int main() {
    for(int i=0;i<N;i++) {
        cin>>chessBorad[i];
    }
    solution(0);
    cout<<numberOfWays;
    return 0;
}