//https://www.spoj.com/PTIT/problems/P153PROF/
// idea lầ sắp xếp hai mảng tăng dần r so sánh hai phần tử với nhau cua rhai mản
// nếu ptu của mảng 1 nhỏ hơn của mảng 2 thì tăng dêm 
// còn nếu lớn hơn or bằng thì tăngg chỉ số của mảng hai lên 


#include<bits/stdc++.h>
using namespace std;
#define ll long long 
ll n ;


int main() {
    cin>> n;
    ll a[n], b[n];
    for(ll i=0;i<n;i++) {
        cin>>a[i];
    }
    for(ll i=0;i<n;i++) {
        cin>>b[i];
    }
    sort(a,a+n);
    sort(b,b+n);
    ll dem =0, i=0, j=0;
    while(i!=n&& j!=n){
        if(a[i]<b[j]){
            dem++;i++;j++;
        }else {
            j++;
        }
    }
    cout<<dem<<endl;

}