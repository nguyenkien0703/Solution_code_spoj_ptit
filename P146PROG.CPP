//https://www.spoj.com/PTIT/problems/P146PROG/

#include<bits/stdc++.h>
using namespace std;
#define ll long long 
ll n ;;
int main(){
    cin>>n;

    ll a[n+10];
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
    int d1=0,d2=0;
    if(n==1){
        cout<<"1 0 "<<endl;
        return 0;
    }
    for(int i=1,j=n;i<=n,j>=1;){
        if(a[i]==a[j]){
            ++d1;++d2;++i;--j;
            if(i==j){
                ++d1;
                break;
            }
        }else if(a[i]<a[j]){
            a[j]=a[j]-a[i];
            ++d1;++i;
            if(i==j){
                ++d2;
                break;
            }
        }else if(a[i]>a[j]){
            a[i]-=a[j];
            ++d2;
            --j;
            if(j==i){
                ++d1;
                break;
            }
        }
    }
    cout<<d1<<' '<<d2<<endl;




}