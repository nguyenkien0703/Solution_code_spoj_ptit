/*
https://www.spoj.com/PTIT/problems/PTIT133D/
PTIT133D - Ăn bánh
Taro và Hanako thi "Ăn bánh".

Ban đầu có một hộp có N cái bánh rán. Taro và Hanako lần lượt ăn, Taro ăn trước. Mỗi lượt người chơi phải ăn một số lượng bánh là lũy thừa của 4, ví dụ 1, 4, 16, 64,... Ai không ăn được lượng bánh nào hợp lệ là thua. Hãy cho biết người thắng cuộc biết rằng hai người đều chơi với chiến thuật tối ưu. (1 <= N <= 10^9).

Input
Mỗi test bắt đầu bằng thẻ "[CASE]", các test cách nhau bởi một dòng trắng. Thẻ "[END]" báo hiệu kết thúc file input.
Mỗi test gồm một số n duy nhất.
Output
Với mỗi test in ra tên của người thắng cuộc.

Example
Input:
[CASE]
1
[CASE]
2
[CASE]
3
[END]
Output:
Taro
Hanako
Taro

*/

#include<stdio.h>
#include<string.h>
int main(){
		
		while(1){
			char s[40];
			long n;
			scanf("%s",s);
			if(strcmp(s,"[END]")==0) return 0;
			scanf("%ld",&n);
		if(n%5==2||n%5==0) printf("Hanako\n");
		else printf("Taro\n");
		}
} 