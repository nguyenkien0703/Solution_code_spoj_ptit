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
    ll n ;
    cin>>n;
    int a[n],b[n],c[n];
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i]>>c[i];
    }
    for(int i=0;i<n-1;i++) {
        for(int j=i+1;j<n;j++) {
            if(a[i]>a[j]){
                swap(a[i],a[j]);
                swap(b[i],b[j]);
                swap(c[i],c[j]);
            }else if(a[i]==a[j]){
                swap(b[i],b[j]);
                swap(c[i],c[j]);
            }
        }
    }
    for(int i=0;i<n;i++) {
        cout<<a[i]<<" "<<b[i]<<" "<<c[i];
        cout<<endl;
    }


}



int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}