/*

P204PROD - DÃY SỐ TỔNG LẺ
Nâm được cho trước 1 mảng a có n số nguyên dương.

Trong 1 phép biến đổi, Nâm được phép chọn 2 vị trí trong mảng và gán giá trị của 1 phần tử cho phần tử còn lại. Số lần thực hiện phép biến đổi là không giới hạn.

Hãy giúp Nâm xem với quy tắc như trên, cậu có thể tạo ra 1 mảng có tổng các phần tử trong mảng là số lẻ hay không?(Bạn có thể không cần biến đổi gì cũng được)

INPUT:

Dòng đầu tiên là số bộ test t (1 ≤ t ≤ 1000)

Với mỗi bộ test t, gồm 2 dòng: Dòng thứ nhất là số nguyên dương n là số phần tử của mảng ( 1 ≤ n ≤ 1000 )

Dòng thứ 2 là n số nguyên dương ai là các phần tử của mảng a (1 ≤ ai   ≤ 1000)

Dữ liệu đảm bảo tổng của các phần tử trong mảng trong trường hợp đạt tối đa không vượt quá 107.

OUTPUT: Với mỗi bộ test, in ra YES nếu có tồn tại tổng lẻ theo quy tắc biến đổi trên, nếu không in ra NO, mỗi bộ test in ra trên 1 dòng.

VÍ DỤ

INPUT

OUTPUT

5

2

2 3

4

2 2 8 8

3

3 3 3

4

5 5 5 5

4

1 1 1 1

YES

NO

YES

NO

NO
*/



#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);cout.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> a(n);
		int cnt0=0;
		int cnt1=0;
		for(int i=0;i<n;i++){
			cin >> a[i];
			if (a[i] % 2==0) cnt0++;
		}
		cnt1 = n - cnt0;
		if (cnt1 == 0 || (cnt0==0 && cnt1 % 2 ==0)){
			cout << "NO" << endl;
		}else{
			cout << "YES" << endl;
		}
 
	}
} 