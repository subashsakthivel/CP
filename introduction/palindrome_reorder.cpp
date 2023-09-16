#include <bits/stdc++.h>
using namespace std;
 
void printPalimdrome(unordered_map<char, int> count , string val, bool flag, int len){
    string left = "";
    string right = "";
    char single;
    for(auto ch : count) {
        if(ch.second%2==1) {
            if(flag) {
                single = ch.first;
                count[single]--;
                flag = false;
            }
            else{
                cout<<"NO SOLUTION";
                return;
            } 
        }
        int c = ch.second/2;
        left = left + string(c , ch.first);
        right = string(c , ch.first) + right;
    }
    if(len%2==1) {
        if(flag) {
            cout<<"NO SOLUTION";
            return;
        }else {
            left += single;
        }
    }
    left += right;
    cout<<left;
}
 
int main() {
    unordered_map<char , int> count;
    string str;
    char single;
    bool flag = false; 
    cin>>str;
    if(str.size()%2==1) {
        flag = true;
    }
    for(int i=0;i<str.size();i++) {
        count[str[i]]++;
    }
    printPalimdrome(count , str, flag, str.size());
    return 0;
}