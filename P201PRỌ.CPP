/*


P201PROJ - Just a math
Just a math

Lin đang là một sinh viên của PTIT, trong kỳ thi cuối kỳ Lin đã đi học nhóm cùng với các bạn của mình. Thật buồn là Lin là một người rất lười học nên trong học kỳ anh ta không học gì cả do vậy anh ta thường bị Thanh – một Idol trong nhóm chê dốt. Một hôm Thanh đã ra cho Lin một bài toán. Thanh đưa cho Lin 2 số nguyên A và B và đố Lin tính được số cặp số nguyên (a, b) thỏa mãn: 1 ≤ a ≤ A, 1 ≤ b ≤ B và

a * b + a + b = ab.

ab là số được tạo ra bằng các ghép 2 số a và b vào thành một số. VD: a = 12, b = 34 thì ab = 1234 và cũng nên nhớ rằng a và b không bắt đầu bằng số 0.

Rất cay cú khi thường bị chê dốt vì vậy Lin quyết định phải giải bằng được bài toán mà Thanh ra cho mình. Nhưng do Lin thật sự rất dốt nên anh ta không thể giải được bài toán này. Nhưng Lin có thể học dốt nhưng không hề ngu anh ta đã nhờ các bạn sinh viên ở PTIT giải quyết bài toán này hộ mình. Các bạn hãy giúp Lin tìm ra câu trả lời để anh ta không còn bị chê dốt nữa nhé!!!

Input

Dòng đầu tiên chứa số nguyên T là số lượng bài toán mà Thanh giao cho Lin.

T dòng tiếp theo mỗi dòng bao gồm 2 số nguyên A và B.

Output

In ra đáp án của mỗi test trên một dòng.
*/


#include<bits/stdc++.h>
using namespace std;
#define ll long long 

ll a, b;
void solve(){
    cin>>a>>b;
    string s =to_string(b);;
    int n=s.size()-1;
    cout<<a*n<<endl;



}

int main() {
    int t;
    cin>> t;
    while(t--){
        solve();
    }
}
