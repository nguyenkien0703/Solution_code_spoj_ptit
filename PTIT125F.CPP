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

int n ;
void solve(){
    cin>> n ;
    int sumu=0, sumd=0;
    int minu=1e9,mind=1e9;
    for(int i=1;i<=n;i++){
        int a, b ;
       cin>>a>>b;
       sumu+=a;
        sumd+=b;
        if(a<minu)minu=a;
        if(b<mind)mind=b;
        

    }
    sumu+=mind;
    sumd+=minu;
    if(sumu<sumd){
        cout<<sumd<<endl;
    }else cout<<sumu<<endl;



}



int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}