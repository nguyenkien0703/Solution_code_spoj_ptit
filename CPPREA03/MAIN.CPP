#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef unsigned long long ull;

#define X first
#define Y second
#define pb push_back
#define mp make_pair
#define ep emplace_back
#define EL printf("\n")
#define sz(A) (int) A.size()
#define FOR(i,l,r) for (int i=l;i<=r;i++)
#define FOD(i,r,l) for (int i=r;i>=l;i--)
#define fillchar(a,x) memset(a, x, sizeof (a))
int main ()
{
	int t ;
    cin>>t;
    while(t--){
        ll n ,k;cin>>n>>k;
        vector<ll > v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int cnt=0,bad=0;
        for(int x : v){
            if(x<=k) ++cnt;
            
        }
        for(int j=0;j<cnt;j++){
        	if(v[j]>k) ++bad;
		}
        int ans =bad;
        for(int i=0,j=cnt;i<n,j<n;i++,j++){
            if(v[i]>k) bad--;
            if(v[j]>k) bad++; 
            ans =min(ans,bad);
        }
        cout<<ans<<endl;
    }
	return 0;
}