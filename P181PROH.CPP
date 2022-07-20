/*

P181PROH - ROUND 1H - Ai thông minh hơn học sinh lớp 5
Hôm nay, Lúi đăng kí tham gia chương trình Ai thông minh hơn học sinh lớp 5. Cậu đang tranh tài cùng với một em học sinh lớp 5 và câu hỏi được đưa ra là: với 2 số nguyên không âm a và b, có bao nhiêu số nguyên không âm x mà a % x = b. Bạn hãy giúp Lúi trả lời thật nhanh câu hỏi này để giành được điểm nhé.

Input
Gồm 2 số nguyên a và b (0 ≤ a, b ≤ 10^9).

Output
Số nguyên duy nhất là số lượng số nguyên không âm x mà a % x = b. Nếu có vô hạn giá trị x thỏa mãn a % x = b hãy in ra “infinity”.

Example
Input:
11 2

Output:
2

*/

#include<bits/stdc++.h>
#define hoaf cout<<"\nLick mY ass oni-chann ~";
 
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
 
int a,b;
int res = 0;
 
void xuly(int n){
	for (int i=1;i<sqrt(n);i++){
		if (n%i==0){
			if (i > b) res++;
			if (n/i > b) res++;
		}
	}
	int k = sqrt(n);
	if (k*k == n && k > b) res++;
	cout<<res;
}
 
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);cout.tie(NULL);
	cin>>a>>b;	
 
	if (a == b){
		cout<<"infinity";
		return 0;
	}
	if (a < b) cout<<0;
	else xuly(a- b);
	
return 0;
}