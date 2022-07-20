/*

Xét tất cả các tập hợp các số nguyên dương có các phần tử khác nhau và không lớn hơn số n cho trước. Nhiệm vụ của bạn là hãy đếm xem có tất cả bao nhiêu tập hợp có số lượng phần tử bằng k và tổng của tất cả các phần tử trong tập hợp bằng s?

Các tập hợp là hoán vị của nhau chỉ được tính là một.

Ví dụ với n = 9, k = 3, s = 23, {6, 8, 9} là tập hợp duy nhất thỏa mãn.

Input
Gồm nhiều bộ test (<= 100 test).

Mỗi bộ test gồm 3 số nguyên n, k, s với 1 ≤ n ≤ 20, 1 ≤ k ≤ 10 và 1 ≤ s ≤ 155.

Input kết thúc bởi 3 số 0.

Output
Với mỗi test in ra số lượng các tập hợp thỏa mãn điều kiện đề bài.

Example
Input:
9 3 23
9 3 22
10 3 28
16 10 107
20 8 102
20 10 105
20 10 155
3 4 3
4 2 11
0 0 0

Output:
1
2
0
20
1542
5448
1
0
0

*/


#include<bits/stdc++.h>
using namespace std;
#define ll long long 



int n, k ,s,dem = 0;
int th[21];
int dung=0;
 
void khoitao () {
    for (int i=1; i<=k; i++){
        th[i]=i;
    }
}
 
void update(){
	int sum = 0;
	for (int i=1;i<=k;i++){
		sum+=th[i];
	} 
	if (sum == s) dem++; 
}
 
void sinhth () {
    int i=k;
    while (i>0 && th[i]==n-k+i) i--;
    if (i>0) {
        th[i]++;
        for (int j=i+1; j<=k; j++) {
            th[j]=th[j-1]+1;
        }
    }else dung=1;

}
 
int main () {
	while (1){
		dem = 0;
	    dung = 0;
	    cin>>n>>k>>s;
	    if (n==0 && n == k && k == s) return 0;
	    if (k > n) k=n;
	    khoitao ();
	    while (dung!=1) {
	        update();
	        sinhth();
	    }
	    cout<<dem<<endl;
	}
    return 0;
}