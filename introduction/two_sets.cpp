#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n;
    cin>>n;
    long long total = n*(n+1)/2;
    if(total%2) {
        cout<<"NO";
    } else {
        vector<int> right;
        vector<int> left;
        long long half = total/2;
        for(int i=n;i>=1;i--){
            if(half>=i) {
                left.push_back(i);
                half -= i;
            } else {
                right.push_back(i);
            }
        }
        cout<<"YES"<<endl;
        cout<<left.size()<<endl;
        for(int val : left)
        cout<<val<<" ";
        cout<<endl;
        cout<<right.size()<<endl;
        for(int val : right)
        cout<<val<<" ";
    }
    return 0;
}