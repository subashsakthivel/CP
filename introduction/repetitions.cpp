#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    long long max_len = 1;
    long long len = 1;
    for(int i=1;i<s.length();i++){
        if(s[i]==s[i-1]) {
            len++;
        }else {
            len = 1;
        }
        max_len = max(max_len , len);
    }
    cout<<max_len;
    return 0;
}