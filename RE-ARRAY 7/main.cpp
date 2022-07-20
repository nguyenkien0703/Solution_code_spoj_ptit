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
bool cmp(string a, string b){
    string ab= a+b;
    string ba =b+a;
    return (ab> ba);
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
        string s[10005] ;
        ll n  ;
        cin>> n;
        for(int i=0;i<n;i++) cin>>s[i];
        sort(s,s+n,cmp);
        for(int i=0;i<n;i++) cout<<s[i];
        cout<<endl;






    }    








}
