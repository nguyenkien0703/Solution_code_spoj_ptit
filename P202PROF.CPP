/*
https://www.spoj.com/PTIT/problems/P202PROF/fbclid=IwAR0oUfO3Foct7Ma1esS3Ijq2cpU5nn3jUZGX74_5RUoJlAQ0lFLWh7l_O2o
P202PROF - Tăng sức mạnh
Cực thích Ezreal, Halley đang tìm hiểu cách build sức mạnh cho chú tướng này. Có hai giá trị là sát thương vật lý và sức mạnh phép thuật. Ban đầu Ezreal được mặc định có giá trị sát thương vật lý là a và sức mạnh phép thuật là b. Halley đang có trong tay c điểm kinh nghiệm và cậu ấy muốn tăng cho hai giá trị này. Để tối đa hóa sát thương, Halley muốn dùng hết điểm kinh nghiệm của mình và một lưu ý nhỏ nữa là cậu ấy muốn sát thương vật lý luôn lớn hơn sức mạnh phép thuật. Hãy giúp xem có bao nhiêu cách mà Halley có thể build sức mạnh cho Ezreal nhé.

Input

Dòng đầu tiên gồm số nguyên T (1 <= T <= 100) – là số bộ test.

T dòng tiếp theo mỗi dòng gồm ba số a,b,c (1 <= a,b <= 108  , 0 <=  c <= 108  ) với a – giá trị sát thương vật lý ban đầu, b – giá trị sức mạnh phép thuật ban đầu, c – điểm kinh nghiệm.

Output

In ra số cách mà Halley có thể build sức mạnh cho Ezreal.

Example

Input

Output

1

5 3 4

 

3

Giải thích:

Với test 1, Ezreal có thể nhận được các giá trị sức mạnh tương ứng sau khi build là (7,5): 2 điểm tăng vào sát thương vật lý và 2 điểm tăng vào sức mạnh phép thuật

(8,4): 3 điểm tăng vào sát thương vật lý và 1 điểm tăng vào sức mạnh phép thuật

(9,3): 4 điểm tăng vào sát thương vật lý và 0 điểm tăng vào sức mạnh phép thuật



*/


#include<bits/stdc++.h>
using namespace std;
#define ll  long long 
void solve(){
    int a, b,c;
    cin>>a>>b>>c;
    int x=max(0,(b+c-a+2)/2);
    cout<<max(0,c-x+1)<<endl;;


}
int main() {
    int t ;
    cin>>t;
    while(t--){
        solve();
    }
}