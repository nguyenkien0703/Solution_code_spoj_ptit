/*

PTIT016C - ACM PTIT 2016 C - Chẵn lẻ
An rất thích những gì có tính thứ tự nên muốn tìm các số nguyên dương mà chữ số ở vị trí chẵn thì là số chẵn còn chữ số ở vị trí lẻ thì là số lẻ. Hãy giúp An thực hiện công việc trên.

Input
Dòng đầu chứa số N là số bộ dữ liệu (1<N<100).
N dòng tiếp theo, mỗi dòng chứa một số nguyên dương không quá 200 chữ số.
Output
Với mỗi bộ dữ liệu, ghi ra trên một dòng chữ YES nếu số đó thỏa mãn tính chất mà An yêu cầu; dòng chữ NO nếu ngược lại.

Example
Input:

4

1

4

1234567812345678123456781234987654327890

87654321



Output:

YES

NO

YES
NO


*/
#include<iostream>
using namespace std;
int main(){
	int T,k=0;
	cin>>T;
	while (k<T){
		k++;
		string str;
		cin>>str;
		bool flag=true;
		for (int i=0;i< str.length();i++){
			if (i%2==0){
				if (str[i]%2==0){
					flag=false;
					break;
				}
			}else if (str[i]%2!=0){
					flag=false;
					break;
				  }
		}
		if (flag==true) cout<<"YES\n";
		else cout<<"NO\n";
	}
return 0;
}
 