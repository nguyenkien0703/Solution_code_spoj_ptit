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
        ll n ;cin>>n;
        vector<ll > v(n),a,b;
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        for(int i=0;i<n;i++){
            if(v[i]==0){
                a.pb(v[i]);
            }else if(v[i]!=0){
                b.pb(v[i]);
            }
        }
        for(int i=0;i<b.size();i++){
            cout<<b[i]<<" ";
        }
        for(int i=0;i<a.size();i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
	return 0;
}