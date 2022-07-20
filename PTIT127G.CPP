/*

PTIT127G - Tách số
Cho đoạn văn có N dòng, mỗi dòng chỉ chứa các chữ số và chữ cái in thuờng trong bảng chữ cái tiếng Anh. Nhiệm vụ của bạn là tìm tất cả các số trong đoạn văn và in chúng ra thành một dãy số không giảm. Để cho đơn giản, các số có các chữ số 0 bắt đầu sẽ xóa bỏ các chữ số 0 ở đầu.

Các số được xác định duy nhất bằng cách quét qua đoạn văn và luôn lấy số lượng các chữ số lớn nhất có thể. Ví dụ: Các số 01a2b3456cde478 là 1, 2, 478, 3456.

Input
Dòng 1 chứa số nguyên N (1 ≤ N ≤ 100), là số dòng của đoạn văn.

N dòng tiếp theo, mỗi dòng chứa một chuỗi các chữ số và chữ cái in thuờng trong tiếng Anh. Mỗi dòng tối đa 100 kí tự.

Output
Gồm M  dòng (M là số các số tìm được trong đoạn văn). Mỗi dòng chứa 1 số lấy từ đoạn văn. Các số được sắp xếp theo thứ tự không giảm. Chú ý: M luôn không quá 500.

Example
Input:
2

lo3za4

01

Output:
1

3

4

Input:
4

43silos0

zita002

le2sim

231233

Output:
0

2

2

43

231233

Input:
4

01bond

02james007

03bond

04austinpowers000

Output:
0

1

2

3

4

7

*/
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#define faster() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);

using namespace std;
vector <string> a;
vector <string> kq;
int cmp(string u,string v){
	while(u.length()!=102) u='0'+u;
	while(v.length()!=102) v='0'+v;
	for(int i=0;i<102;i++){
		int ui=u[i]-'0';
		int vi=v[i]-'0';
		if(ui>vi) return 0;
		if(ui<vi) return 1;
	}
	return 1;
}
int main(){
	faster();
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		cin>>s;
		a.push_back(s);
	}
	for(int i=0;i<a.size();i++){
		for(int j=0;j<a[i].length();j++){
			if(a[i][j]>='0' && a[i][j]<='9'){
				string tam;
				while(a[i][j]>='0' && a[i][j]<='9'){
					tam+=a[i][j];
					j++;
				}
				kq.push_back(tam);
			}
		}
	}
	//thuc hien xoa so 0 o dau 
	for(int i=0;i<kq.size();i++){
		int j=0;
		if(kq[i].length()!=1){
			while(kq[i][j]=='0' && kq[i].length()!=1) kq[i].erase(j,1);
		}
	}
	sort(kq.begin(),kq.end(),cmp);
	for(int i=0;i<kq.size();i++) cout<<kq[i]<<endl;
}  





