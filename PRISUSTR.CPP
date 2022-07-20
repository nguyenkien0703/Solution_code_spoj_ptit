/*
Cho một xâu các chữ số, nhiệm vụ của bạn là tìm số nguyên tố lớn nhất (gồm các chữ số liên tiếp nhau) xuất hiện trong xâu. Các số nguyên tố trong đoạn 2 đến 100 000.

Input
Mỗi dòng chứa 1 xâu (tối đa 255 số).

Kết thúc bởi dòng chứa số 0 (không cần xử lý)

Output
Với mỗi xâu, in ra trên 1 dòng kết quả

Example
Input:
11245 91321150448 1226406011245
91321150448
1226406
0

Output:
11
1321
2
*/
#include<iostream>
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
 
void sangNT(vector<int> &nto){
	vector<int> check(100005,1);
	for (int i=2;i<=sqrt(100005);i++){
		if (check[i])
			for (int j=i*i;j<=100005;j+=i){
				check[j]=0;
			}
	}
	for (int i=2;i<=100000;i++){
		if (check[i]) nto.push_back(i);
	}
}
 
ll stringToNum(string s){
	ll num=0;
	for (int i=0;i<s.length();i++){
		num=num*10+(s[i]-'0');
	}
	return num;
}
 
int main(){
	while(1){
		vector<int> nto;
		vector<ll> ds;
		string s;
		cin>>s;
		if (s=="0") return 0;
		sangNT(nto);	
		for (int i=0;i<s.length();i++){
			string tmp="";
			for (int j=i;j<s.length();j++){
				tmp+=s[j];
				for (int k=0;k<nto.size();k++){
					if (nto[k]==stringToNum(tmp)){
						ds.push_back(nto[k]);
						break;	
					} 
				}
			}
		}
		sort(ds.begin(),ds.end());
		cout<<ds[ds.size()-1]<<endl;
	}
return 0;
}