/*

CPPFIB03 - FIBONACCI 3
Cho mảng A[] gồm n số nguyên không âm. Hãy tìm dãy con lớn nhất chỉ toàn các số Fibonacci.

Input
Dòng đầu tiên đưa vào số lượng bộ test T. 

Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai dòng:

dòng thứ nhất đưa vào n là số phần tử của mảng A[];

dòng tiếp theo đưa vào n số các phần tử của mảng A[];

các số được viết cách nhau một vài khoảng trống. 

T, n, A[i] thỏa mãn ràng buộc :1 ≤ T ≤ 100; 1≤n≤100; 1≤A[i]≤1000.

Output
Đưa ra dãy con lớn nhất bao gồm các số Fibonacci của mỗi test theo từng dòng.

Example
Input 	Output
2 
7
1 4 3 9 10 13 7
9
0 2 8 5 2 1 4 13 23	1 3 13
0 2 8 5 2 1 13


*/


#include<bits/stdc++.h>
using namespace std;
#define ll  long long 
vector<ll> fibo(93);
void preprocess(){
    fibo[0] = 0;
    fibo[1] = 1;
    for(int i=2;i<=92;i++){
        fibo[i] = fibo[i-1] + fibo[i-2];
    }    
}

void process(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<93;j++){
            if (a[i] == fibo[j]){
                cout << a[i] << " ";
                break;
            }
        }
    }
    cout << endl;
}

int main(){
    preprocess();
    int T;
    cin >> T;
    while (T--)
    {
        process();
    }
    

    return 0;
} 

