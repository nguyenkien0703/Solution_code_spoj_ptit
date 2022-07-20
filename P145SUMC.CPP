// https://www.spoj.com/PTIT/problems/P145SUMC/
//nghiax là ucln là 3, thì trogng khonagr 1 , 5 thi fmình thấy cso 3 là giá trị cần tìm  nên in ra 3 
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a, b;
ll tmp;
vector<ll> v;

void init()
{
    cin >> a >> b;
    tmp = __gcd(a, b);
    ll k = sqrt(tmp);
    for (int i = 1; i <= k; i++)
    {
        if (tmp % i == 0)
        {
            v.push_back(i);
            v.push_back(tmp / i);
        }
    }
    if (k * k == tmp)
        v.push_back(k);
    sort(v.begin(), v.end());
}
int Bsearch(ll c, ll d)
{
    int l = 0;
    int r = v.size() - 1;
    int ans = -1;
    while (l <= r)
    {
        int mid = (l + r);
        if (v[mid] <= d)
        {
            if (v[mid] >= c)
                ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return ans;
}
void process()
{
    ll l, r;
    cin >> l >> r;
    if (Bsearch(l, r) != -1)
        cout << v[Bsearch(l, r)];
    else
        cout << -1;
    cout << endl;
}
int main()
{
    init();
    int Q;
    cin >> Q;
    while (Q--)
    {
        process();
    }
    return 0;
}
