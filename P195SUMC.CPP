// https://www.spoj.com/PTIT/problems/P195SUMC/
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
#define faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
const ll mod = 1e9 + 7;
const ll N = 10005;

ll n, a[1000005];
ll check(ll n,ll a[]){
    
    ll sum =0;
    for(ll i=0;i<n;i++){
        if(a[i]==25){
            sum+=a[i];
        }else if(a[i]==50){
            sum -=25;
            if(sum>=0){
                continue;
            }else return 0;
            
            
        }else if(a[i]==100){
            sum-=100;
            if(sum>=0){
                continue;
            }else return 0;
        }
    }
    if(sum >=0){
        return 1 ;
    }else return 0;
    
}


int main()
{
    faster;
  
   cin>> n;
    
    for(ll i=0;i<n;i++) cin>>a[i];
    if(check(n,a)==1){
        cout<<"YES";
    }else cout<<"NO";
    
}


