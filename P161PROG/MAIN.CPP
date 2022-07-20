/*
Một số x được gọi là đặc biệt nếu không tồn tại 1 số nguyên a > 1 nào mà bình phương của nó là ước của x.

Cho 1 số n. Hãy tìm ước lớn nhất của n là số đặc biệt!
vis udj 10 _> 10
12-> 6


Có nghĩa là bạn sẽ phải tìm ước lớn nhất của n là x và tất cả các ước của x không phải là số chính phương.
 - Tìm các ước của n -> x1, x2, ...
- Sắp xếp tăng dần hoặc giảm dần

- Với mỗi x: thì tìm tất cả các ước > 1 của x xem có ước nào là số chính phương không? Nếu không có thì x đó là số đặc biệt cần tìm.

- Duyệt từ đầu đến cuối hay cuối về đầu tùy thuộc vào giảm dần hay tăng dần.

*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef unsigned long long ull;

#define X first
#define Y second
#define pb push_back
#define mp make_pair
#define ep emplace_back
#define EL printf("\n")
#define sz(A) (int)A.size()
#define FOR(i, l, r) for (int i = l; i <= r; i++)
#define FOD(i, r, l) for (int i = r; i >= l; i--)
#define fillchar(a, x) memset(a, x, sizeof(a))

ll cp(ll n ){
    ll x=sqrt(n);
    if((ll)x*x==n) return 1 ;
    return 0;

}
ll kt(ll n){
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            if(cp(i)==1&& sqrt(i)>1) return 0;
            if(cp(n/i)==1 && sqrt(n/i)>1) return 0;
        }
    }
    return 1 ;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n ;
    cin>> n;
    vector<ll> uoc;
    //để hiểu dc cái for to này thì cứ chạy haui số là 16 với 24 thì sẽ hiểu 

    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            if(i!=sqrt(n)){
                uoc.pb(i);
                uoc.pb(n/i);
            }else {
                if(cp(n)==1){
                    uoc.pb(i);
                }else{
                    uoc.pb(i);
                    uoc.pb(n/i);
                }
            }
        }
    }
    sort(uoc.begin(),uoc.end());
    for(int i=uoc.size()-1;i>=0;i--) {
        if(kt(uoc[i])==1){
            cout<<uoc[i];
            break;
        }
    }
    cout<<endl;

}
