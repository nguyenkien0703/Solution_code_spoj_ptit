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
ll  prime[1000005];
void sang(){
    for(ll i=0;i<=1000000;i++) prime[i] =1;
    prime[0] = prime[1] =0;
    for(ll i=2;i*i<=1000000;i++){
        if(prime[i]){
            for(ll j= i*i;j<=1000000;j+=i) prime[j]=0;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    sang();
    int t ;
    cin>>t ;
    cin.ignore();
    while (t--) {
        
       ll n ; cin>> n;
       for(ll i=2;i*i<=n;i++){
           if(prime[i]){
               cout<<i*i<<' ';
           }
       }

        cout<<endl;


    }    








}
