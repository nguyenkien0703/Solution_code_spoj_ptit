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
void solve(){
 
    ll n, cnt=0;;
    cin>> n;ll a[n];
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    ll minn=1e9;
    for(int i=0;i<n;i++ ) minn=min(minn,a[i]);;
    ll ucln=a[0]-minn;
    for(int i=0; i < n; i++){
        ucln=__gcd(ucln,a[i]-minn);
    }
    int ans=0;
    for(int i=1;i<=ucln;i++){
        if(ucln%i==0)++ans;
    }
    cout<<ans<<endl;
 
 
 
 
 
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
 