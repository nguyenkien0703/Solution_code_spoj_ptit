/*
BCCAR - Đỗ xe tối ưu
Khi mua sắm trên khu Long Street, Michael thường đỗ xe của mình ở một vị trí nào đó và đi bộ vào cửa hàng. Bạn hãy giúp Michael chọn một chỗ đỗ xe để khoảng cách phải đi bộ khi mua hàng là nhỏ nhất.

Long Street có thể coi như là một đường thẳng mà tất cả những điểm mua hàng là các điểm có tọa độ nguyên. Bạn sẽ phải trả phí cho mỗi lần đỗ xe ở một điểm đỗ, điểm đỗ là một điểm có tọa độ nguyên. Michael không muốn trả tiền đỗ xe nhiều hơn 1 lần và vì anh ta rất khỏe nên có thể mang tất cả các túi xách, hàng hóa mua được giữa các cửa hàng cần đi mà không có vấn đề gì.

 

Dữ liệu vào

Dòng đầu tiên chứa một số nguyên 1 ≤ t ≤ 100 là số lượng bộ test. Mỗi bộ test gồm 2 dòng, dòng đầu tiên ghi số cửa hàng n mà Michael muốn qua mua hàng, 1 ≤ n ≤ 20 và dòng thứ hai ghi n số nguyên là các điểm này trên phố Long Street, 0 ≤ xi ≤ 99.

 

Dữ liệu ra

Với mỗi bộ test, in ra trên một dòng khoảng cách nhỏ nhất phải đi bộ với chỗ đỗ xe tối ưu.

 

 

INPUT

OUTPUT

 

2

4

24 13 89 37

6

7 30 41 14 39 42
*/

#include<iostream>
#include<string>
using namespace std;
int main(){
	int t,k=0;
	cin>>t;
	while(k<t){
		k++;
		int n;
		cin>>n;
		int a[n];
		for (int i=0;i<n;i++) cin>>a[i];
		int max=a[0];
		int min=a[0];
		for (int i=0;i<n;i++){
			if (a[i]>max) max=a[i];
			if (a[i]<min) min=a[i];
		}
		cout<<(max-min)*2<<endl;
	}
	
return 0;
}