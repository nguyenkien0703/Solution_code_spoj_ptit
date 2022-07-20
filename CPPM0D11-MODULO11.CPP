//https://www.spoj.com/PTIT/problems/CPPMOD11/
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
ll a,b,c ;
ll multi(ll a, ll b , ll c ){
	if(b==0) return 0;
	if(b==1) return a %c;
	ll tmp=multi(a,b/2,c);
	if(b%2==0){
		return (tmp*2)%c;
	}else {
		return (tmp*2%c+a)%c;
	}
}

int main() {
    int t ;
    cin>> t;
    while(t--){
    	cin>>a>>b>>c;
    	cout<<multi(a,b,c)<<endl;
    	
    	
	}

}