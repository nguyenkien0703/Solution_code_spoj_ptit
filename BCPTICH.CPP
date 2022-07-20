/*

BCPTICH - Phân tích số nguyên
 

Rất nhiều số nguyên dương có thể được biểu diễn thành tổng của một dãy các số nguyên liên tiếp. Ví dụ:    6 = 1 + 2 + 3   9 = 5 + 4 = 2 + 3 + 4 Tuy nhiên, số 8 thì lại không thể biểu diễn được như vậy. Bài toán đặt ra là với mỗi số nguyên cho trước, hãy đếm xem có thể có bao nhiêu cách biểu diễn số nguyên đó thành tổng của các số nguyên dương liên tiếp.  Input: Dòng đầu tiên ghi số bộ test, không lớn hơn 1000. Mỗi bộ test bao gồm thứ tự bộ test, tiếp theo là một số nguyên dương n nhỏ hơn 231
 

Rất nhiều số nguyên dương có thể được biểu diễn thành tổng của một dãy các số nguyên liên tiếp. 

Ví dụ:  

 6 = 1 + 2 + 3  

 9 = 5 + 4 = 2 + 3 + 4 

Tuy nhiên, số 8 thì lại không thể biểu diễn được như vậy. Bài toán đặt ra là với mỗi số nguyên cho trước, hãy đếm xem có thể có bao nhiêu cách biểu diễn số nguyên đó thành tổng của các số nguyên dương liên tiếp.  

Input: Dòng đầu tiên ghi số bộ test, không lớn hơn 1000. Mỗi bộ test bao gồm thứ tự bộ test, tiếp theo là một số nguyên dương n nhỏ hơn 231

Output: Với mỗi bộ test, in ra màn hình thứ tự bộ test, tiếp theo là số cách biểu diễn tìm được

 

 

Example
Input:
7  
1 6  
2 9  
3 8  
4 1800  
5 987654321  
6 987654323  
7 987654325

Output:
1 1  
2 2  
3 0  
4 8  
5 17  
6 1  
7 23 


*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define foru(i,a,b) for(int i=a;i<=b;i++)
#define ford(i,b,a) for(int i=b;i>=a;i--)
ll count(ll n){
    ll dem=0;
    ll x,y,l,r;
    for(int i=2;i*i<=n;i++){
    	if(n%i==0){
    		x=n/i;
    		y=i;
    		if((x+y-1)%2==0){
    			r=(x+y-1)/2;
    			l=x-r;
    			if(l>=1&&r>l){
    				++dem;
				}
			}
		}
	}
	return dem;
 
 
 
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
//    cout.tie(0);
    int t ;cin>>t;
    while(t--){
        int tc  ;cin>>tc;
        cout<<tc<<" ";
        ll n;
        cin>>n;
        cout<<count(2*n)<<endl;
 
    }
 
    return 0;
} 