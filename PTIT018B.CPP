
//https://www.spoj.com/PTIT/problems/PTIT018B/
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void qsort(ll a[], int l , int r ){
	int i=l, j=r;
	int mid=(l+r)/2;
	int key=a[mid];
	while(i<=j){
		while(a[i]< key) ++i;
		while(a[j]> key) --j;
		if(i<=j){
			swap(a[i], a[j]);
			++i;--j;
		}
	}
	if(i< r) qsort(a,i,r);
	if(j> l) qsort(a, l,j);
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t ;
	cin>>t ;
	while(t--){
		ll n;
		cin>>n;
		ll a[n],  b[n];
		for(ll &x : a ) cin>> x;
		for(ll  &x : b) cin>> x;
		qsort(a,0,n-1);
		qsort(b,0,n-1);
		bool ok =true;
		for(int i=0;i<n;i++){
			if(a[i]> b[i]){
				ok =false;
				break;
			}
		}
		if(ok ){
			cout<<"YES\n";
		}else cout<<"NO\n";
		
	}
	
	
}