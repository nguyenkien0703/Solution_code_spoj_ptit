/*
Một dãy gồm n số nguyên không âm a1, a2,..., an được viết thành một hàng ngang, giữa hai số liên tiếp có một khoảng trắng, như vậy có tất cả (n­-1) khoảng trắng. Người ta muốn đặt k dấu cộng và (n-1-k) dấu trừ vào (n­-1) khoảng trắng đó để nhận được một biểu thức có giá trị lớn nhất.

Ví dụ, với dãy gồm 5 số nguyên 28, 9, 5, 1, 69 và k = 2 thì cách đặt 28+9-5-1+69 là biểu thức có giá trị lớn nhất.

Yêu cầu: Cho dãy gồm n số nguyên không âm a1, a2,..., an và số nguyên dương k, hãy tìm cách đặt k dấu cộng và (n-1-k) dấu trừ vào (n­-1) khoảng trắng để nhận được một biểu thức có giá trị lớn nhất.

Input
-         Dòng đầu chứa hai số nguyên dương n, k (k < n ≤ 105);

-         Dòng thứ hai chứa n số nguyên không âm a1, a2,..., an (an ≤ 106)

Output
-         Một số nguyên là giá trị của biểu thức đạt được.

Example
Input:
5 2

28 9 5 1 69

Output:
100
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

 
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	ll n, k;
	cin>>n>>k;	
	ll a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n,greater<int>());
	ll sum =0;
	for(int i=0;i<=k;i++){
		sum+=a[i];
	}
	for(int i=k+1;i<n;i++){
		sum-=a[i];
	}
	cout<<sum;

return 0;
}



