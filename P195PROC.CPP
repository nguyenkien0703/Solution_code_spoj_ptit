/*


P195PROC - Problem C - ACM
Bạn sẽ tham gia cuộc thi  ACM PTIT vào tháng 4 sắp tới. Có N bài bạn cần giải quyết. Với mỗi bài, bạn biết rõ thời gian mà mình sẽ hoàn thành được bài đó. Năm nay, cuộc thi sẽ tính thêm 1 hạng mục điểm phạt. Với mỗi bài tập được hoàn thành, số điểm phạt là thời gian bạn từ khi bắt đầu cuộc thi cho đến khi nộp được bài tập đó. Điểm phạt của bạn sẽ là tổng điểm phạt các bài mà bạn hoàn thành trong thời gian diễn ra cuộc khi.

Cho biết thời gian thi là 300 phút. Hãy tính số bài nhiều nhất bạn có thể hoàn thành, và số tiền phạt ít nhất có thể để hoàn thành số bài đó.

Input
Dòng đầu tiên chứa số nguyên N (1 ≤ N ≤ 105) - số lượng bài trong đề thi.

Dòng tiếp theo gồm N số nguyên ai (1 ≤ ai ≤ 300) - thời gian giải quyết cho từng bài. (Đơn vị tính: phút)

Output
In ra trên 1 dòng số lượng bài nhiều nhất mà bạn có thể giải quyết và mức phạt tối thiểu có thể.

Example
Input:
8
252 244 6 109 294 31 67 270

Output:
4 360


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
ll n , sum =0, sum1=0;
 
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cin>>n;
	ll a[n];
	for(ll & x : a) cin>>x;
	sort(a,a+n);
	int cnt=0;
	for(int i=0;i<n;i++){
		sum+=a[i];
		if(sum> 300) break;
		++cnt;
		sum1+=sum;
	}
	cout<<cnt<<' '<<sum1<<endl;
	
return 0;
} 