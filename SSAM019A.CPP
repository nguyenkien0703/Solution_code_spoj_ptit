#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll cp(ll n)
{
    int ans = sqrt(n);
    if (ans * ans == n)
        return 1;
    return 0;
}
ll check(ll n)
{
    set<ll> se;
    int ans = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (i % 2 == 0)
                se.insert(i);
            if ((n / i) % 2 == 0)
                se.insert(n/i);
        }
    }
    return se.size();
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        cout << check(n) << endl;
    }
} 