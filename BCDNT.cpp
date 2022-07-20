//https://www.spoj.com/PTIT/problems/BCDNT/
#include<bits/stdc++.h>
using namespace std;

#define ll long long 

ll n;
ll merge(ll a[], ll l ,ll r ,ll m ){
    vector<int> x(a+l,a+m+1);
    vector<int> y(a+m+1,a+r+1);
    int i=0, j=0,cnt=0;;
    while(i<=x.size()&& j<=y.size()){
        if(x[i]<=y[j]){
            a[l]=x[i];
            ++l;++i;
        }else {
            cnt+=x.size()-i;
            a[l]=y[j];
            ++l;++j;
        }
    } 

    while(i<=x.size()){
        a[l]=x[i];
        ++l;++i;

    }
    while(j<=y.size()){
        a[l]=y[j];
        ++l;++j;
    }
    return cnt ;
}
ll mergeSort(ll a[],ll l ,ll r){
    int dem =0;
    if(l<r){
        
        int m=(l+r)/2;
        dem+=mergeSort(a,l,m);
        dem+=mergeSort(a,m+1,r);
        dem+=merge(a,l,r, m);
    }
    return dem;
}
int main(){

    cin>> n;
    ll a[n];
    for(int i=0; i<n; i++){
        cin>> a[i];
    }
    cout<<mergeSort(a,0,n-1)<<endl;


}