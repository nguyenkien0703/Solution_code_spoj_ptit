#include<bits/stdc++.h>
 
#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define alphaa "abcdefghijklmnopqrstuvwxyz"
#define ALPHAA "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define faster() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
 
using namespace std;
 
typedef double ld;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> II;
 
const ld pi=2*acos(0);
const ll inf  = LLONG_MAX;
const ll ninf = LLONG_MIN;
const int oo = INT_MAX;
const int noo = INT_MIN;
int d1[100],d2[100],n,cot[100],X[100],cnt=0;
void Try(int i ){
	for(int j=1;j<=n;j++){
		if(cot[j]==1&&d1[i-j+n]==1&&d2[i+j-1]==1){
			X[i]=j;
			cot[j]=d1[i-j+n]=d2[i+j-1]=0;
			if(i==n){
				++cnt;
			}else {
				Try(i+1);
			}
			cot[j]=d1[i-j+n]=d2[i+j-1]=1;
		}
	}
	
}






int main(){
	faster();
	cin>>n;
	for(int i=1;i<=99;i++){
		cot[i]=d1[i]=d2[i]=1;
		
		
	}
	Try(1);
	cout<<cnt<<endl;

	
return 0;
}  