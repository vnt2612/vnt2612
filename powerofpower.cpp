#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll power(ll x, ll y, ll MOD){
    if(y==0){
        return 1;
    }
    ll ans = power(x, y/2, MOD);
    if(y%2!=0){
        return (power(x,y/2, MOD)*power(x,y/2, MOD)*x)%MOD;
    }
    return (power(x, y/2, MOD)*power(x, y/2, MOD))%MOD;
}
ll ans(ll a, ll b, ll c, ll MOD){
    ll powerBC = power(b, c, MOD-1);
    ll powerABC = power(a, powerBC, MOD);
    return powerABC;
}
int main(){
    ll q, a, b, c, MOD = (1e18) + 9;
    cin >> q;
    while(q--){
        cin >> a >> b >> c;
        cout << ans(a, b, c, MOD) << endl;
    }
}
