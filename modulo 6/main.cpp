#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef unsigned long long ull;

#define X first
#define Y second
#define pb push_back
#define mp make_pair
#define ep emplace_back
#define EL printf("\n")
#define sz(A) (int)A.size()
#define FOR(i, l, r) for (int i = l; i <= r; i++)
#define FOD(i, r, l) for (int i = r; i >= l; i--)
#define fillchar(a, x) memset(a, x, sizeof(a))
const ll mod = 1e9 + 7;

ll res(ll a, ll b ,ll m){
    if(b==1) return a%m;
    ll tmp=res(a,b/2,m);
    if(b%2==0) return tmp*tmp%m;
    else return (tmp*tmp)%m *a%m;
}

void solve(){
    string a;
    ll b,m;
    cin>>a>>b>>m;
    ll mod=0;
    for(int i=0;i<a.length();i++){
        mod=(mod*10+a[i]-'0')%m;
    }
    cout<<res(mod,b,m)<<endl;;





}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t ;
    cin>>t ;
    cin.ignore();
    while (t--) {
       solve();




    }    








}
