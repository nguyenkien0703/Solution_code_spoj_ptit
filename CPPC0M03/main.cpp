
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
#define faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
const ll mod = 1e9 + 7;

int n, a[1000];
bool ok[1000];
void out()
{
    for (int i = 1; i <= n; i++)
        cout << a[i];
    cout << endl;
}

void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (!ok[j])
        {
            a[i] = j;
            ok[j] = true;
            if (i == n)
            {
                out();
            }
            else
            {
                Try(i + 1);
            }
            ok[j] = false;
        }
    }
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
        cin >> n;
        Try(1);

        cout << endl;
    }
}