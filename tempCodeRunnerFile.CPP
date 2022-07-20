#include<bits/stdc++.h>
using namespace std;
#define ll long long 
ll n ;
int main(){
    int t ;
    cin >> t;
    while(t--){
        cin>> n;
        queue<ll> q;
        q.push(9);
        ll cantim =0;
        while(!q.empty()){
            ll number =q.front();
            q.pop();
            if(number%n==0){
                cantim =number;
                break;
            }else {
                q.push(number*10+9);
                q.push(number*10+0);
            }
        }
        cout<<cantim<<endl;




    }



}