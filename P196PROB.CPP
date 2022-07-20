/*
P196PROB - Problem B - Gặp gỡ ngày 26/3
N, K, T là những người bạn chơi thân với nhau từ cấp 3. Khi lên đại học mỗi người học ở một trường đại học thật may mắn khi họ cùng học trên 1 trục trường nguyễn trãi. Giả sử đường Nguyễn Trãi sẽ là một trục tọa độ Ox. N, K, T lần lượt sống ở điểm x1 , x2  ,x3 . Họ dự định sẽ gặp nhau tại một điểm trước rồi mới đi chơi cùng nhau.

Bạn hãy giúp họ tính tổng quãng đường tối thiểu phải đi để gặp nhau để đi chơi ngày 26/3.

Nó được đảm bảo câu trả lời luôn là một số nguyên.

Input
Dòng đầu tiên chứ chứa ba số nguyên dương lần lượt là x1 , x2  ,x3 . Lần lượt là tọa độ của các bạn N, K, T.

Output
In ra một số nguyên duy nhất – tổng khoảng cách tối thiểu mà 3 bạn cần phải đi.

Example
Input:
7 1 4

Output:
6
*/



#include<bits/stdc++.h>
using namespace std;
#define ll long long 
 
int a[3];
int res = 0;
 
 
 
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);cout.tie(NULL);
	for (int i=0;i<3;i++){
		cin>>a[i];
	}
    
	sort(a,a+3,greater<int>());
	for (int i=0;i<2;i++){
		res+=a[i]-a[i+1];
	}
	cout<<res;
return 0;
} 