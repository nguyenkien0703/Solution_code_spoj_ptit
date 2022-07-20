#include<bits/stdc++.h>
using namespace std ;

//in ra dãy con tang lien tiếp dài nhất đó, néu có nhiều dãy cion thì in ra dãy con đaàu tiên 
/*
10
1 2 3 3 3 4 5 2 1 -3
3 
1 2 3 
*/
int main() {
    int n ; cin >> n ;
    int a[n];
    for(int i=0;i<n;i++) {
      cin >> a[i];
    }  
    int res =0, cnt =1, idx;
    for(int i=1;i<n;i++) {
        if(a[i] >= a[i-1]) {
            ++cnt;
        }else{
            cnt =1 ;

        }
	//nếu mà muốn innra dãy cuối cùng thì thêm dấu bằng chỗ res là dc , ngay dòng dưới
        if(cnt > res) {
            res = cnt ;
            idx = i-res+1;// vì thực chất cái dãy con liên tiếp đó là có res thằng , ở đây mìnhncập nhật cái chỉ số bắt đầu cho dễ ,từ i-res+1 đến i là có res thằng 
        }
    }
    cout<<res<<endl;
    //duyệt res thằng 
    // for(int i=0;i<res;i++){
    //     cout<<a[idx + i ]<<" ";
    // }


   
   return 0;



}    