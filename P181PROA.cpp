//https://www.spoj.com/PTIT/problems/P181PROA/
//ció nghĩa là từ dãy ban đầu , m  ohải chia dãy đó thành các dãy con mà moiõ day conc
//có sốlượng ptu là lẻ, và số các dãy con cũng là lẻ , và mõi dãy có ptu đầu tien và phần tửt cuôú cùng cũng là lẻ 1
#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
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
 
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	int n; 
	cin>>n;
	vi v;
	for(int i=1;i<=n;i++){
		int tmp; cin>>tmp;
		v.push_back(tmp);
	}
	if(n%2){
		if(v[0]%2!=0 && v[v.size()-1]%2!=0){
			cout<<"yes";
			return 0;
		}
	}
	cout<<"no";
	
return 0;
}