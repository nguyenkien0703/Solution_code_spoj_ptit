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
#define FOR(i,l,r) for (int i=l;i<r;i++)
#define FOD(i,r,l) for (int i=r;i>=l;i--)
#define fillchar(a,x) memset(a, x, sizeof (a))
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
const ll mod=1e9+7;
 

 
 
int main(){
	faster;
	ll n ,m;
    cin>> n>>m;
    int a[n];
    FOR(i,0,n-1){
        cin>>a[i];        
    }
    int min =1e9;
    vector<pair<int, int> > v;
    for(int i=0;i<n-1;i++){
        if(a[i]+a[i+1]==m){
            v.pb({a[i],a[i+1]});
        }

    }
}  