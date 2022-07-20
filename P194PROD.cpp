
//https://www.spoj.com/PTIT/problems/P194PROD/
#include<bits/stdc++.h>
using namespace std;
 
#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))
 
int n,a,x,y;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    foru(i,1,n){
        cin >> a;
        if (a==1) x=i;
        else if (a==n) y=i;
    }
    cout << max(x-1,max(y-1,max(n-x,n-y)));
}