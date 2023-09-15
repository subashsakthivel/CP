#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t= 0;
    cin>>t;
    long long n=1;
    while(n<=t) {
        cout<<(((n*n)*(n*n -1))/2 - 4*(n-1)*(n-2))<<endl;
        n++;
    }
    return 0;
}
