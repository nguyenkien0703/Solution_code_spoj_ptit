/*


P184PROA - ROUND 4A - Xếp hàng mua vé
Jackichul đang xếp hàng mua vé trận chung kết VCSA sắp tới giữa GAM và EVS. Có n người đang xếp hàng nhưng anh ta không biết chính xác vị trí của mình.Anh ta chỉ biết có không ít hơn a người đứng trước mặt mình và có không quá b người đứng phía sau. Tìm số vị trí khác nhau mà Jackichul có thể đứng.

Input
Dòng duy nhất chưa ba số nguyên n, a, b (0 ≤ a, b < n ≤ 100).

Output
In ra một số nguyên là số vị trí Jackichul có thể đứng.

Example
Input:
4 1 2

Output:
3
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
//	faster();
	int n , a, b;
	cin>>n>>a>>b;
	int dem =0;
	for(int i=0;i<=b;i++){
		if(n-i-1>=a) dem++;
		else break;
	}
	cout<<dem;
}  