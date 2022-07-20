/*

P185PROA - ROUND 5A - Số nhỏ nhất
Suk Go là một thầy giáo và cũng là một thiên tài toán học. từ năm lớp 1 ông đã mang một bài toán (vô cùng khó với tuổi đọc viết chưa sõi ấy) đến lớp để đố các bạn.

Suk go có một số vô cùng lớn và mọi người sẽ phải đảo ngược các chữ số của chúng lại bằng cách lấy 9 trừ đi số đó (không nhất thiết phải thực hiện) và sau cuối sẽ thu được một số nhỏ nhất.

Hãy giúp mọi người trong lớp giải quyết bài toán này nhé.

Input
Dòng đầu chứa số nguyên t là số bộ test (t < 105).

T dòng sau mỗi dòng chứa một số nguyên n (1 < n < 10100)

Output
Gồm t dòng, mỗi dòng là một số duy nhất có giá trị nhỏ nhất thỏa mãn bài toán.

Chú ý: số nhỏ nhất không được chứa số 0 ở đầu

Example
Input:
2
27
4545

Output:
22
4444
*/




#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);cout.tie(NULL);
	ll n;
	cin>>n;
	while (n--){
		string s;
		cin>>s;
//		while(s[0]=='0') s.erase(s.begin());
		string tmp="";
		for (int i=0;i<s.length();i++){
			if (s[i]<'5') tmp+=s[i];
			else tmp+=(9-(s[i]-'0'))+'0';
		}
		if (tmp[0]=='0') tmp[0]='9';//vi du nhapo vao 99999->>90000
		cout<<tmp<<endl;
	}
return 0;
}
 