/*
https://www.spoj.com/PTIT/problems/P161SUMH/
P161SUMH - ROUND 1H - Bàn cờ
OOO có một bàn cờ, trên bàn cờ đã được phủ kín bảo 2 loại quân trắng và đen. OOO giờ muốn kiếm tra xem tất cả các ô trên bàn cờ, với các ô kề cạnh của nó có số quân trắng là chẵn.

Bàn cỡ được mô tả bởi một mảng 2 chiều kích thước n * n, quân đen biểu diễn bằng kí tự ‘x’, quân trắng biểu diễn bằng kí tự ‘o’.

In ra “YES” nếu mọi ô trên bàn cờ đều thỏa mãn, in ra “NO” nếu không.

Input
Dòng đầu tiên chứ số nguyên n (1 <= n <= 100)

n dòng tiếp theo, mỗi dòng chứa n kí tự biểu diễn cho bàn cờ.

Output
Kết quả bài toán.

Example
Test 1:
Input:
3
xxo
xox
oxx
Output:
YES
Test 2:
Input:
4
xxxo
xoxo
oxox
xxxx
Output:
NO

*/

#include<bits/stdc++.h>
#define lmao cout<<"\nLick mY ass oni-chann ~";
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef double ld;
typedef vector<int> vi;
typedef vector<long> vl;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
const ld pi=2*acos(0);
const ll inf  = LLONG_MAX;
const ll ninf = LLONG_MIN;
int n;
char table[101][101];
int x[]={1,-1,0, 0};
int y[]={0, 0,1,-1};
void solution(){
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>table[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			int dem=0;
			for(int k=0;k<4;k++){
				if( table[i+x[k]][j+y[k]] == 'o' ) dem++;
			}
			if (dem%2!=0){
				cout<<"NO";
				return ;
			}
		}
	}
	cout<<"YES";
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);cout.tie(NULL);
	solution();
return 0;
}
