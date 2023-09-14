#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    long long missing_number = n;
    for(int i=1;i<n;i++){
        int val;
        cin>>val;
        missing_number ^= val^i;
    }
    cout<<missing_number;
    return 0;
}