#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        long long x , y;
        long long  val = 0;
        cin>>x>>y;
        if(x>=y) {
            if(x%2==0) val = x*x -y +1;
            else val = (x-1)*(x-1) + y;
        }else {
            if(y%2==1) val = y*y - x +1;
            else val = (y-1)*(y-1) + x; 
        }
        cout<<val<<endl;
    }
    return 0;
}