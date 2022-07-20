/*


PTIT125B - Mua quà
FJ muốn mua quà cho N (1<=N<=1000) con bò của mình bằng cách sử dụng tổng số tiền là B (1<=B<=1,000,000,000).

Bò i yêu cầu món quà có giá trị P(i) và có phí vận chuyển S(i) (nên tổng số tiền phải trả là P(i)+S(i) nếu FJ mua món quà đó). FJ có 1 phiếu giảm giá đặc biệt giúp anh có thể mua một món quà với giá bằng một nửa giá trị của món quà đó. Nếu FJ sử dụng phiếu giảm giá cho bò i, anh ấy cần phải thanh toán tổng số tiền là P(i)/2+S(i). Để cho dễ dàng, tất cả các P(i) đều là số chẵn.

Bạn hãy giúp FJ xác định xem ông có thể mua quà cho tối đa là bao nhiêu con bò.

Input
- Dòng 1: 2 số nguyên N và B

- Dòng 2..1+N: Dòng i+1 chứa 2 số nguyên P(i) và S(i) (0<=P(i),S(i)<=1,000,000,000)

Output
Một số nguyên duy nhất là số bò tối đa mà FJ có thể mua quà

Example
Input:
5 24
4 2
2 0
8 1
6 3
12 5
Output:
4
Giải thích: FJ có thể mua quà cho các con bò từ 1 đến 4,
bằng cách sử dụng phiếu giảm giá cho bò 3.
Tổng số tiền thanh toán là (4+2)+(2+0)+(4+1)+(6+3) = 22
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll n, s;
struct data
{
    int x;
    int y;
};
vector<data> ds;
bool cmp(data a, data b)
{
    if (a.x + a.y == b.x + b.y)
    {
        return a.x < b.x;
    }
    else
    {
        return a.x + a.y < b.x + b.y;
    }
}
void init()
{

    cin >> n >> s;
    for (int i = 0; i < n; i++)
    {
        data tmp;
        cin >> tmp.x >> tmp.y;
        ds.push_back(tmp);
    }
}
void solve()
{
    sort(ds.begin(), ds.end(), cmp);
    int i = 0;
    while (s != 0)
    {
        if (ds[i].x + ds[i].y <= s)
        {
            s -= ds[i].x + ds[i].y;
            i++;
        }
        else
        {
            ds[i].x /= 2;
            if (ds[i].x + ds[i].y <= s)
            {
                s -= ds[i].x + ds[i].y;
                i++;
            }
            break;
        }
    }
    cout << i << endl;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    init();
    solve();
}
