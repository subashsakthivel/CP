#include <bits/stdc++.h>
using namespace std;

void solve(int n , int A , int B, int C, vector<vector<int>> &moves) {
    if(n==0) {
        return;
    }
    solve(n-1, A, C, B, moves);
    moves.push_back({A, C});
    solve(n-1, B , A, C, moves);
}
 
int main() {
    int n;
    cin>>n;
    vector<vector<int>> moves;
    solve(n, 1, 2 , 3, moves);
    cout<<moves.size()<<endl;
    for(vector<int> move : moves) {
        cout<<move[0]<<" "<<move[1]<<endl;
    }
    return 0;
}
