/*
https://www.spoj.com/PTIT/problems/P161SUMA/
*/



#include<bits/stdc++.h>

#define lmao cout<<"\nLick My Ass onii-chann ~";
#define alphaa "abcdefghijklmnopqrstuvwxyz"
#define ALPHAA "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define ll long long 
using namespace std;

const ll inf  = LLONG_MAX;
const ll ninf = LLONG_MIN;
const int oo = INT_MAX;
const int noo = INT_MIN;
ll a,b;
ll res = 0;
ll k,r;
void init(){
	cin>>a>>b;
}
void process(){
	while(b){
		res+=a/b;
		r=a%b;
		a=b;
		b=r;
	}
	cout<<res;
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);cout.tie(NULL);
	init();
	process();
	return 0;
}
