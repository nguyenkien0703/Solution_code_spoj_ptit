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
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
const ll mod=1e9+7;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
 
    int t ;
    cin>>t;
    while(t--){
        int n ;
        cin>>n;
        int a[n] ;
        for(int &x :a) cin>>x;
        ll b[n];
        for(int i=1;i<n-1;i++) b[i]=a[i-1]*a[i+1];
        b[0]=a[0]*a[1],b[n-1]=a[n-1]*a[n-2];
        for(ll x : b){
        	cout<<x<<" ";
		}
        cout<<endl;

    }
 
 
 
 
 
    
} 