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

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n  ;
    cin>> n;
    ll i, j, ngay,val=0;;
    for(int i=1;i<=12;i++){
        if(i==1|| i==3||i==5||i==7||i==8||i==10||i==12){
            ngay= 31;
        }else if(i==2){
            if((n%4==0 && n%100!=0)|| (n%400==0)){
                ngay =29;
            }else {
                ngay=28;
            }
        }else {
            ngay =30;
        }
        for(int j=1;j<=ngay;j++){
            val +=j/10+j%10 + i/10 + i%10 +(n/1000) +(n%10) +(n/100)%10 + (n/10)%10;
        }
    }
    cout<<val;




}
