/*

*/


#include<iostream>
#include<stdio.h>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef double ld;
const double pi=2*acos(0);

ll sumdiv(ll n){
	int i;
	ll dem=1; 
	for ( i=2; i<sqrt(n); i++) 
		if ((n%i)==0) 
			dem=dem+i+n/i; 
	if ((n/(int)(sqrt(n)))==sqrt(n)) 
		dem=dem+(int)sqrt(n); 
	if (n!=1) dem = dem+n; 
	return dem;	
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	int T;
	cin>>T;
	while(T--){
		ll n;
		cin>>n;
		ll m=sumdiv(n);
		if (sumdiv(m)==n*2) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
return 0;
}
