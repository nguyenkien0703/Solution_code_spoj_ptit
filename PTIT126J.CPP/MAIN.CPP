/*
Có N cây gỗ, có chiều cao lần lượt là A[1],A[2],..,A[n]. 
Bạn cần lấy một lượng gỗ độ cao tối thiểu là M bằng cách chặt từ N cây theo cách như sau: chặt tất cả những phần thừa của các cây có độ cao lớn hơn H. Hãy tìm giá trị H lớn nhất để bạn có thể lấy được lượng gỗ tối thiểu là M.
Input:
4 7

20 15 10 17

Output:
15
giải thich đề; hiểu như là nó có 4 cây gỗ , và nó cần lấy ra phần thừa có độ cao là 7
(hiểu nôm na là ghép các phần chătj ra xong ghép lại thì có chiều cao là  )
thì bây h mày cần chọn  số h, để mà khi cắt các cây gỗ tới độ cao h này , thì dư ra các phần thừa 
có tổng đồ dài ghép lại dc là 7 và số cây gỗ cần chặt là ít nhất

*/


#include<bits/stdc++.h>
#define hoaf cout<<"\nhoaf13. I'm here ~";
 
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<long> vl;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef double ld;
 
const double pi=2*acos(0);
const ll inf  = LLONG_MAX;
const ll ninf = LLONG_MIN;
 
ll sum(ll a[],int n,int val){
	ll sum=0;
	for(int i=0;i<n;i++){
		if (a[i]>val){
			sum+=a[i]-val;
		}
	}
	return sum;
}
//tìm kiếm nhị phân 
int Bsearch(ll a[],int l,int r,int n,ll m ){
	ll res=0;
	while (l<=r){
		int val=(l+r)/2;
		if (sum(a,n,val)>=m){
			res=val;
			l=val+1;
		}
		else  r=val-1; 
	}
	return res;
}
 
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);cout.tie(NULL);
	int n;
	ll m;
	cin>>n>>m;
	ll a[n];
	ll l=2000000009,r=0;
	for (int i=0;i<n;i++){
		cin>>a[i];
		r=max(r,a[i]);	
		l=min(l,a[i]);
	}
	cout<<Bsearch(a,l,r,n,m);
return 0;
}