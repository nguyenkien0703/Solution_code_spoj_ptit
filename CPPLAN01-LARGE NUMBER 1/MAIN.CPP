#include <bits/stdc++.h>
//  ======trừ hai số rất lớn =======
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

void solve(){
    string x, y;
    cin>>x>>y;
    string res="";
    while(x.length()<y.length() )x="0"+x;
    while(y.length()<x.length()) y="0"+y;
    if(x<y) swap(x,y);
    for(int i=x.length()-1;i>0;i--){
        if(x[i]>=y[i]) res= char(x[i]-y[i]+'0')+res;
        else{
            res=char(x[i]-y[i]+10+'0')+res;
            x[i-1]--;
        }
    }

    res=char(x[0]-y[0]+'0')+res;
    cout<<res<<endl;



}



int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
 
    int t ;
    cin>>t;
    while(t--){
        
        solve();
    }
 
 
 
 
 
    
} 