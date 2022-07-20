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
	ll n , m;
	cin>>n>>m;
	ll sum=n*(n+1)/2;
	ll big=(sum+m)/2;
	ll small=(sum-m)/2;
	if(__gcd(big,small)==1&&(small+big==sum)&&(big-small==m)){
		cout<<"Yes"<<endl;
	}else{
		cout<<"No"<<endl;
	}
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
    	solve();
    }
}