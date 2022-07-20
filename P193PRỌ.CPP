/*


P193PROJ - Problem J - Tam Giác
Xác định xem có thể tạo được 1 hình tam giác với độ dài cạnh cho trước bằng cách cắt hình chữ nhật đã cho bằng 1 đường thẳng duy nhất?

Input
Dòng đầu tiên chứa 2 số nguyên a, b (0 < a, b < 109) – độ dài 2 cạnh hình chữ nhật.

Dòng thứ 2 chứa 3 số nguyên x, y, z (0 < x, y, z < 109) – độ dài 3 cạnh tam giác.

Output
In ra “YES” nếu có thể tạo được hình tam giác, ngược lại, in ra “NO”.

Example
Input
8 6
6 8 10

Output
YES

*/

#include<bits/stdc++.h>
#define hoaf cout<<"\nhoaf13. I'm here ~";
 
using namespace std;
 
typedef long long ll;
typedef unsigned long long ull;
typedef double ld;
typedef vector<int> vi;
typedef vector<long> vl;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
 
const double pi=2*acos(0);
const ll inf  = LLONG_MAX;
const ll ninf = LLONG_MIN;
 
 
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	ll a[3];
	ll b[3];
	cin>>a[0]>>a[1];
	cin>>b[0]>>b[1]>>b[2];
	a[2]=sqrt(a[0]*a[0]+a[1]*a[1]);
	sort(a,a+3);
	sort(b,b+3);
	bool flag=true;
	for(int i=0;i<3;i++){
		if (a[i] < b[i]){
			flag=false;
			break;
		}
	}
	if(flag){
		if ( b[0]*b[0] + b[1]*b[1] == b[2]*b[2]) cout<<"YES";
		else cout<<"NO";
	}
	else cout<<"NO";
	
return 0;
}