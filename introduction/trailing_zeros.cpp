#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n;
    long long ans=0;
    cin>>n;
    long long current = 5;
    while(n>=current) {
        ans += n/current;
        current *=5;
    }
    cout<<ans;
    return 0;
}