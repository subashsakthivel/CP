#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin>>n;
    while(true){
        cout<<n<<" ";
        if(n==1) break;
        n = n%2 ? n*3 + 1 : n>>1;
    }
}