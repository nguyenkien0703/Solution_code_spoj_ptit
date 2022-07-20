#include<bits/stdc++.h>
using namespace std;
 
#define ll long long 

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t ;
    cin>> t ;
    while(t--){
        int n , m ;
        cin>> n>>m ;
        char f[n][m];
        for(int i=0;i<n;i++) {
            
            cin>>f[i] ;
            
        }
        ll cnt =0;
        for(int i=0;i<n;i++) {
            int dem1=0, dem2=0;
            for(int j=0;j<m;j++) {
                if(f[i][j]=='0') continue;
                for(int k=0;k<m;k++) {
                    if(f[i][j]=='1'&&f[i][k]=='2') dem1++;
                    if(f[i][j]=='2'&&f[i][k]=='1') dem1++;

                }
                for(int k=0;k<n;k++) {
                    if(f[i][j]=='1'&&f[k][j]=='2') dem2++;
                    if(f[i][j]=='2'&&f[k][j]=='1') dem2++;
                }
                cnt+=(ll)(dem1*dem2);
                dem1=0;
                dem2=0;
            }

        }
        cout<<cnt<<endl;
    }


}