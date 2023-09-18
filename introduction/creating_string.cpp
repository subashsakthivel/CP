#include <bits/stdc++.h>
using namespace std;

void permute(string str , int l , int r, set<string> &res){
    if(l==r) {
        res.insert(str);
        return;
    }
    for(int i=l;i<=r;i++) {
        swap(str[l], str[i]);
        permute(str , l+1 , r, res);
        swap(str[l], str[i]);
    }
}

int main() {
    string s;
    cin>>s;
    set<string> res;
    permute(s , 0 , s.size() -1, res);
    cout<<res.size()<<endl;
    for(auto str : res) {
        cout<<str<<endl;
    }
    return 0;
}