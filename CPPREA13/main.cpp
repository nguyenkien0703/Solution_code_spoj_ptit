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
    int n ,m ;
    cin>>n>>m;
    int a[n], b[m];
    FOR(i,0,n-1) cin>>a[i];
    FOR(i,0,m-1) cin>>b[i];
   sort(a,a+n);
   int x= a[0]-1;
   FOR(i,0,m-1){
       FOR(j,0,n-1){
           if(b[i]==a[j]){
               cout<<a[j]<<" ";
               a[j]=x;
           }else  if(b[i]<a[j] ) break;
       }
   }
   for(int i=0;i<n;i++){
       if(a[i]!=x){
           cout<<a[i]<<" ";
       }
   }
   cout<<endl;
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
        cout<<endl;
    }    


}
