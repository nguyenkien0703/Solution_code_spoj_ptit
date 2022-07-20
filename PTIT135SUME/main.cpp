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

void solve(){
	ll a[9];
    for(int i=1;i<=8;i++){
        cin>>a[i];
    }
    int up=1,dow=1;
    for(int i=1;i<8;i++){
        if(a[i]<a[i+1]) dow=0;
        if(a[i]>a[i+1]) up=0;
    }
    if(up==1 && dow==0) cout<<"ascending"<<endl;
    else if(up==0 && dow==1) cout<<"descending"<<endl;
    else cout<<"mixed"<<endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // int t;
    // cin >> t;
    // while (t--)
    // {
    	solve();
    // }
}