//https://www.spoj.com/PTIT/problems/P172SUMJ/

//leo cầu thang , bạn dc bước 1 bậc or là 2 bâhc , .....
#include<bits/stdc++.h>
using namespace std;
#define ll long long 


int main() {
    ll n, m;
    cin>>n>>m;
    ll begin=0;
    if(n%2==0){
        begin=n/2;
    }else begin=n%2+1;

    for(int i=begin;i<=n;i++){
        if(i%m==0){
            cout<<i;
            return 0;
        }
    }
}