/*

BCREMAI - Thách đố số học 1
Cho 2 số nguyên dương n và m, và n số nguyên dương a1,a2,...an. Với mỗi số i (1≤i≤n) thì bi=ai!.

Bạn phải tìm giá trị (b1^b2^b3^....^bn) mod m. (b1 mũ b2 mũ b3 mũ.....mũ bn lấy dư cho m). 

Input
Dòng đầu chứa số bộ test.

Mỗi bộ test có dạng như sau:

- Dòng đầu chứa n và m (1≤n≤100) (1≤m≤40000)

- Sau đó là n số a1,a2...an. (ai<231)

Output
Mỗi bộ test trên 1 dòng chứa kết quả cần tìm.

Example
Input:
1
2 100
3 8

Output:
76

*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll powmod(ll a, ll b, ll m){
    a%=m;
    ll res =1 ;
    while(b){
        if(b%2==1){
            res*=a;
            res%=m;
        }
        a*=a;
        a%=m;
        b/2;
    }
    return res;
    
}
ll check[105];
void gt(){
    check[0]=1;
    for(int i=1;i<=105;i++){
        check[i]=i*check[i-1];
    }
}

void solve(){
    gt();
    int n ,m ;
    cin>>n>>m;
    string s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    ll sum =0;
    for(int i=0;i<n;i++){
        sum =sum +powmod()
    }

}
int main(){
    int t ;
    cin>> t;
    while(t--){
        solve();

    }
}