#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll power(ll base , ll times) {
    ll answer = 1;
    while(times--) {
        answer *= base;
    }
    return answer;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll queries, k;
    cin>>queries;
    while(queries--) {
        cin>>k;
        ll n=1 , sum = 0;
        do{
            sum = sum + 9 * n * power(10  , n-1);
            n++;
        } while(k>=sum);
        n--;
        ll away = (sum - k) / n;
        ll remainder = (sum - k) % n;

        ll number = ((power(10 , n)-1) - away);
        string res = to_string(number);

        cout<<res[res.length() -1 - remainder]<<endl;
    }
    return 0;
}