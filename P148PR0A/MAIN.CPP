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


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int  n ;
    while(1){
        cin>>n;
        if(n==0) break;
        int cnt=1;
        while(n!=1){
            if(n%2==0){
                n=n/2;
                ++cnt;
            }else if(n%2==1){
                ++cnt;
                n=n*3+1;
            }
        }
        cout<<cnt<<endl;

    }

}
