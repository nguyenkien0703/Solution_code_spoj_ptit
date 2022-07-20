/*
BCPP - Số phong phú
Trong số học, số phong phú là các số mà tổng các ước số của số đó (không kể chính nó) lớn hơn số đó. 

Ví dụ, số 12 có tổng các ước số (không kể 12) là 1 + 2 + 3 + 4 + 6 = 16 > 12. Do đó 12 là một số phong phú.

Bạn hãy lập trình đếm xem có bao nhiêu số phong phú trong đoạn [L,R].

Dữ liệu
Gồm 2 số L, R (1 <= L <= R <= 106)

Kết quả
Gồm 1 số nguyên duy nhất là số số phong phú trong đoạn [L, R].

Chú ý
Có 50% số test có 1 <= L <= R <= 103

Ví dụ
Dữ liệu
1 50

Kết quả
9

Giải thích:
Từ 1 đến 50 có 9 số phong phú là: 
12, 18, 20, 24, 30, 36, 40, 42, 48


*/


#include <iostream>
#include <math.h>
using namespace std;
 
int arr[1000006];
void init ()
{
	int n = 1000000;
	for (int i=1; i<= n; i++)
		arr[i]=0;
	arr[0]=0;
	for (int i=1; i<=n; i++)
	{
		for (int j=1; j<=n/i; j++)
		{
			
			arr[j*i]+=i;
		}
	}
}
 
int main ()
{
	int L, R;
	cin>>L>>R;
	init ();
	int dem=0;
	for (int i=L; i<=R; i++)
	{
		if (arr[i]-i>i) dem++;
	}
	cout<<dem;
	return 0;
}