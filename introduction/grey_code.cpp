#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    for(int i=0;i< 1<<n;i++) {
        int val = i ^ (i>>1);
        bitset<32> foo(val);
        string code = foo.to_string();
        for(int j = 32 - n;j<32;j++) {
            cout<<code[j];
        }
        cout<<"\n";
    }
    return 0;
}