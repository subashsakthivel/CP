#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    vector<string> ans;
    while(t--) {
        int a , b;
        cin>>a;
        cin>>b;
        if(a<b)
        swap(a,b);
        if(a>2*b || (a+b)%3!=0){
            ans.push_back("NO");
        }else {
            ans.push_back("YES");
        }
    }
    for(string res : ans) {
        cout<<res<<endl;
    }
    return 0;
}