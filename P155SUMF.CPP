/*

P155SUMF - ROUND 5F - Tìm lại dãy số
Bạn được cho 1 dãy các số nguyên A. Từ dãy số A ban đầu, ta tìm được dãy B theo cách sau:

B[i] = (a[1] + a[2] + .. + a[i]) / i;

Nhiệm vụ của bạn là từ dãy B cho trước, hãy tìm lại dãy A

Input
Dòng đầu tiên nhập 1 số tự nhiên n (0 < n < 101) là số các phần tử dãy B.

Dòng tiếp theo gồm các số tự nhiên B[i]( 1 ≤ B[i] ≤ 109).

Input đảm bảo kết quả luôn là các số nguyên

Output
In ra trên 1 dòng các phần tử của dãy A cách nhau bởi 1 dấu cách.

Example
Test 1:

Input:

1

2

Output:

2

 

Test 2:

Input:

4

3 2 3 5

Output:

3 1 5 11

 

Test 3:

Input:

5

1 2 2 3 4

Output:

1 3 2 6 8



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
	int n;
	cin>>n;
	long a[n+1];
	for (int i=1;i<=n;i++) cin>>a[i];
	long s=a[1];
	cout<<a[1]<<" ";
	for (int i=2;i<=n;i++){
		cout<<a[i]*i-s<<" ";
		s+=a[i]*i-s;
	} 
return 0;
}
  