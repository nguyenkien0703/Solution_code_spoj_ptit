/*
Một từ được gọi là pangram nếu tất cả các chữ cái trong bảng chữ cái tiếng Anh đều xuất hiện duy nhất 1 lần.

Bạn hãy kiểm tra xem từ bạn nhập vào có phản pangram hay không.

Input
Dòng thứ 1 số tự nhiên n là độ dài từ nhập vào (1 ≤ n ≤ 100).

1 từ có thể có cả chữ cái viết hoa và viết thường, độ dài n. 

Output
In “YES” nếu từ nhập vào là pangram, “NO” trong trường hợp ngược lại.

Example
Input:
12

toosmallword

Output:
NO
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[50],i,n;
	bool flag=true;
	string s;
	cin>>n;
	cin>>s;
	for (i=97;i<=122;i++) a[i]=0;
	for (i=0;i<n;i++) {
		if(s[i]>=65 && s[i]<=90) s[i]+=32;
	}
	for (i=0;i<n;i++) {
		int t=s[i];
		a[t]++;
	}
	for (i=97;i<=122;i++){
		if(a[i]==0) {
			flag=false;
			break;
		}
	}
	if(flag==true) cout<<"YES"; else cout<<"NO";
	return 0;
} 