// https://www.spoj.com/PTIT/problems/P143PROF/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod=123456789;
ll n;
ll powmod(ll a,ll b ){
    ll res=1;
    a%=mod;
    while(b){
        if(b&1){
            res*=a;
            res%=mod;
        }
        a*=a;
        a%=mod;
        b/=2;
    }
    return res;
}



int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    cout<<powmod(2,n-1);
}