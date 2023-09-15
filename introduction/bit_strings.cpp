#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
 
long long power(int n) {
    if(n==0) return 1;
    return 2*power(n-1)% MOD;
}

int main() {
    long long n;
    cin>>n;
    long long ans = power(n);
    cout<<ans;
    return 0;
}