/*
FINDCOW - Find the Cow!
Cô bò Bessie đã trốn thoát và đang trốn ở một đồi núi với những đồng cỏ cao. Nông dân John (FJ), người đang muốn tìm kiếm Bessie, đã quyết định bò trên đồng cỏ bằng tay và dầu gối để tìm ra dấu vết của Bessie. Không may thay, ông ta có vấn đề với việc tìm kiếm Bessie từ vị trí thuận lợi này. Dãy cỏ ở trước mặt FJ trông như một chuỗi ngoặc đơn có độ dài N (1 <= N <= 50,000); ví dụ:

)((()())())

FJ biết rằng Bessie chân sau của Bessie giống như một cặp dấu mở ngoặc đơn ((, và chân trước của cô ta giống như một cặp dấu đóng ngoặc đơn. Vị trí của Bessie có thể được diễn tả bởi mọt cặp x < y , trong đó (( được tìm ở vị trí x, và )) được tìm ở vị trí y. Hãy đếm có bao nhiêu vị trí mà Bessie có thể đang đứng.

Input
Dòng 1: Một chuỗi ngoặc đơn có độ dài là N (1 <= N <= 50,000).

Output
Dòng 1: Số vị trí mà Bessie có thể đứng – Có nghĩa là số cặp (x,y) khác nhau với x < y sao cho (( được tìm thấy ở x và )) được tìm thấy ở y.

Example
Input:
)((()())())

Output:
4
Có 4 vị trí có thể của Bessie được thể hiện ở dưới

1. )((()())())

    ^^   ^^

2. )((()())())

     ^^  ^^

3. )((()())())

     ^^     ^^

4. )((()())())

    ^^      ^^
*/
#include<stdio.h>
#include<string.h>
char s[50000];

int main()
{
	gets(s);
	int i,dem=0,tong=0;
	for (i=strlen(s);i>=0;i--) if(s[i]==')' && s[i-1]==')') dem++;
	while(dem!=0)
	{
		for (i=0;i<strlen(s)-1;i++) 
		 {
		 	if(s[i]=='('&& s[i+1]=='(') tong+=dem;
		 	else if(s[i]==')' && s[i+1]==')') dem--;
		 }
	}
	printf("%d",tong);
	return 0;
} 