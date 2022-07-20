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

void solve(){

    string s ;
    cin>> s;
    stack<int> res ;
    FOR(i,0,s.length()){
        if(i==s.length()|| s[i]=='I'){
            cout<<i+1;
            while(res.empty()==0){
                cout<<res.top();
                res.pop();
            }
        }else if(s[i]=='D'){
            res.push(i+1);
        }
    }
    cout<<endl;


}



int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
 
    int t ;
    cin>>t;
    cin.ignore();
    while(t--){
        solve();
    }
 
 
 
 
 
    
} 