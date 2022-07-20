#include<bits/stdc++.h>
using namespace std;
#define ll long long 
//https://www.spoj.com/PTIT/problems/PTIT127J/
ll n ;
string s ;
ll A[1000000]={0};
ll B[1000000]={0};
int main(){

    cin>> n;
    cin>>s;
    int cnt =0;
    if(s[0]=='B') A[0]++;
    else B[0]++;
    for(int i=1;i<n;i++){

        if(s[i]=='A'){
            A[i]=A[i-1];
            B[i]=min(A[i-1],B[i-1])+1;
        }else {
            A[i]=min(A[i-1],B[i-1])+1;
            B[i]=B[i-1];
        }
    }         
    cout<<A[n-1];






}