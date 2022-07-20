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
    int t ;
    cin>> t;
    while(t--){
        int n,x,y;cin>>n>>x>>y;
        ll a[n][n],cnt=1;;
        ll h1=0,h2=n-1,c1=0,c2=n-1;
        while(h1<=h2 && c1<=c2){
            //xay duing hang dau tien 
            for(int i=c1;i<=c2;i++){
                a[h1][i]=cnt;
                ++cnt;
            }
            ++h1;
            //xay dung canh ngoai cung
            for(int i=h1;i<=h2;i++){
                a[i][c2]=cnt;
                ++cnt;
            }
            --c2;
            if(c1<=c2){
                //xay dung casnh ben dpi
                for(int i=c2;i>=c1;i--){
                    a[h2][i]=cnt;
                    ++cnt;
                }
                --h2;

            }
            if(h1<=h2){
                for(int i=h2;i>=h1;i--){
                    a[i][c1]=cnt;
                    ++cnt;
                }
                ++c1;
            }




        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==x-1 && j==y-1){
                    cout<<a[i][j];
                }
            }
            // cout<<endl;
        }
        cout<<endl;
    }






}
