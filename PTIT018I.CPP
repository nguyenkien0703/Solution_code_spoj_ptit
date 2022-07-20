/*

PTIT018I - ACM PTIT 2018 I - SỐ NHỎ NHẤT
Cho bốn số nguyên dương X, Y, Z và N. Hãy tìm số nguyên dương nhỏ nhất có N chữ số chia hết đồng thời cho X, Y, Z. Ví dụ với X = 2, Y = 3, Z = 5, N = 4 ta tìm được số nguyên dương nhỏ nhất có 4 chữ số là 1020 chia hết cho cả 2, 3, 5.

Input
Dòng đầu tiên đưa vào số lượng test T (T≤100).

Mỗi bộ test gồm 4 số nguyên X, Y, Z, N (1≤ X, Y, Z ≤105; N≤18). 

Output
Với mỗi test in số nguyên tìm được trên một dòng. Nếu không có đáp án, in ra -1. 

Example
Input:
3
2 3 5 4
4 5 6 3
3 5 7 2

Output:
1020
120
-1
Dòng đầu tiên là số lượng bộ test T (T≤100).
Mỗi test gồm dòng thứ nhất chứa số nguyên N là số lượng phần tử của mảng A[] (1≤N≤1000).
Dòng tiếp theo gồm N số nguyên A[i] (1≤A[i]≤5000).

*/

SPOJ submission 29417575 (CPP14) plaintext list. Status: AC, problem PTIT018I, contest PTIT. By vancien (vancien), 2022-04-09 18:13:21.
#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string>
#include<vector>
#include<algorithm>
#include <sstream>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef double ld;
 
const double pi=2*acos(0);
 
long long ucln(long long a, long long b){
	long long x;
	while(b>0){
		x=a%b;
		a=b;
		b=x;
	}
return a;
}
 
long long bcnn(long long d, long long c){
	long long x;
	x=ucln(d,c);
return (d*c)/x;
}
 
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	int T,k=0;
	cin>>T;
	while(k<T){
		k++;
	    int a, b, c , n;
	    cin>>a>>b>>c>>n;
	    long long s=bcnn(bcnn(a, b),c);
	    while(1){
	    	string xau;          
   			ostringstream convert;   
    		convert << s;      
    		xau = convert.str(); 
			if(xau.length()<n){
				s+=bcnn(bcnn(a, b),c);
			}
			if(xau.length()==n){
				cout<<xau<<endl;
				break;
			}
			if(xau.length()>n){
				cout<<"-1"<<endl;
				break;
			}
		} 
	}
    return 0;
}
  