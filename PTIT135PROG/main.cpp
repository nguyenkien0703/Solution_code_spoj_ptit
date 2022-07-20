/*
Tí đang ngồi học toán nhưng thấy chán quá nên ngồi viết ra các số tự nhiên từ 1 tới n và để tăng phần thú vị, đầu tiên, Tí viết các số lẻ trong n số theo thứ tự tăng dần từ trái qua phải ra trước rồi viết tất cả các số chẵn cũng theo thứ tự tăng dần ra sau.

Sau đó Tí đố tèo biết được giá trị của số thứ k trong dãy số mà Tí vừa viết. Tèo bí quá đành nhờ các bạn giúp vậy.
10 3 -> 5
7 7 -> 6
*/

#include<stdio.h>
 
int main(){
	long long n,k;
	scanf("%lld%lld",&n,&k);
	if(n==1) printf("1");
	else{
		if(n%2==0){
			if (k<=n/2){
				printf("%lld",k*2-1);
			}else printf("%lld",k-(n-k)); 
		}
		if (n%2!=0){
			if (k<=n/2+1){
				printf("%lld",(k*2-1));
			}else printf("%lld",k-(n+1-k)); 
		}
	}
return 0;
}