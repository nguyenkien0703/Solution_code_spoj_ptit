/*

PTIT122F - Số siêu tự nhiên
Một số siêu tự nhiên là một chuỗi chứa các chữ số và dấu hỏi (ví dụ như 36?1?8). Một số X phù hợp với một số siêu tự nhiên W nếu X có thể được tạo thành từ W bằng cách thay thế dấu hỏi bằng các chữ số tùy ý. Ví dụ: 365198 phù hợp với số siêu tự nhiên 36?1?8, nhưng 360199, 361028 hoặ 36128 thì không. Viết chương trình đọc số siêu tự nhiên W và số X (có cùng độ dài n), và xác định số các số phù hợp với W và lớn hơn X. 

Dữ liệu:

Gồm nhiều bộ test, mỗi bộ test gồm 2 dòng:

-          Dòng 1 chứa số siêu tự nhiên W

-          Dòng 2 chứa số nguyên X

Độ dài các số từ 1 đến 10 kí tự.

Dữ liệu kết thúc bởi dấu #

Kết quả:

Với mỗi bộ test, in ra trên 1 dòng số các số phù hợp với W và lớn hơn X.

Example
Input:
36?1?8

236428

8?3

910

?

5

#

Output:
100

0

4
*/


#include<iostream>
#include<cmath>
#include<string>
using namespace std;
long dequy(string a,string b,int i,int x){
    if(a[i]=='0') return 0;
    if(a[i]=='?') return (9-(b[i]-'0'))*(long long)pow(10,x-1)+dequy(a,b,i+1,x-1);
    else if(a[i]<b[i]) return 0;
    else if(a[i]>b[i]) return (long long)pow(10,x);
    return dequy(a,b,i+1,x);
}
int main(){
    string a;
    cin>>a;
    while(a[0]!='#'){
        string b;
        cin>>b;
        int dau=0;
        for(int i=0;i<a.length();i++){
            if(a[i]=='?') dau++;
        }
        long long kq=dequy(a,b,0,dau);
        cout<<kq<<endl;
        cin>>a;
    }
    return 0;
} 