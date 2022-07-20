#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef unsigned long long ull;

#define X first
#define Y second
#define pb push_backl
#define mp make_pair
#define ep emplace_back
#define EL printf("\n")
#define sz(A) (int)A.size()
#define FOR(i, l, r) for (int i = l; i <= r; i++)
#define FOD(i, r, l) for (int i = r; i >= l; i--)
#define fillchar(a, x) memset(a, x, sizeof(a))

ll nt(ll n , ll k ){
    int cnt=0;
    for(ll i=2;i*i<=n;i++){
        if(n%i==0){
            ++cnt;
            while(n%i==0){
                n/=i;
            }
        }
    }
    if(n!=1){
        ++cnt;
    }
    return cnt ==k;
}
void solve(){
    ll a, b , k;
    cin>>a>>b>>k;
    int ans=0;
    for(int i=a;i<=b;i++) {
        if(nt(i,k)){
            ++ans;
        }
    }
    cout<<ans<<endl;




}



int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    for (int i=1;i<=t;i++) 
    {
        cout<<"Case #"<<i<<": ";
    	solve();
    }
}