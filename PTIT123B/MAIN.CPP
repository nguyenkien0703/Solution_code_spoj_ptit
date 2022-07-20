#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
//viet ham kiem tra xem cac so trong mang da  bang nhau chua 
int kiemtra(long a[], int n){
	int dd=1;
	int i;
	for (i=1;i<n;i++) 
		if(a[i]!=a[0]) dd=0;
	if(dd==1) return 1;//mang da bang nhau 
	else return 0;//mang chua bang nhau 
}
int main(){
	int j=1;//moi lan chay  no in ra case bao nhieu ys
    while(1){
      	int n;
      	scanf("%d",&n);
      	if(n==0) break;
		long a[n],i,dem1=0;
		int ok=1;//de check xem mang bang nhau het chua 
		for (i=0;i<n;i++) scanf("%ld",&a[i]);
			while(kiemtra(a,n)==0){//trong khu mang chua bang nhau 
				long k=a[0];
				for (i=0;i<n-1;i++){
					
					a[i]=abs(a[i]-a[i+1]);
				}
				a[n-1]=abs(a[n-1]-k);
				//sau khi thuc hien xong 1 luot theo yeu cau thi tang bien dem len 
				dem1++;
			    if(dem1>1000){
					ok=0;
					printf("Case %d: not attained\n",j);
					break;
			    }
		    }
		    //sau khi thuc hien thi  mang da doi xung roi
		    if(ok==1) printf("Case %d: %d iterations\n",j,dem1);
		    j++;
		}
	return 0;
} 