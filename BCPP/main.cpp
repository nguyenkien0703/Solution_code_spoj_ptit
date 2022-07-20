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
 
ll check(ll n){
    ll sum=0,tmp=n;
    for(ll i=2;i*i<=n;i++){
        if(n%i==0){
            if(i!=(n/i)){
                sum+=i+n/i;
            }else {
                sum+=i;
            }
        }
    }
    return sum>tmp;
}

 
 
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	ll n ,m;
    cin>> n>>m;
    int cnt=0;
    FOR(i,n,m){
        if(check(i)){
            ++cnt;
        }
    }
    cout<<cnt<<endl;
}  