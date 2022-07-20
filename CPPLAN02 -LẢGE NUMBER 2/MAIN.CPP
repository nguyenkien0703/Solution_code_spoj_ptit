#include <bits/stdc++.h>
//  ======trừ hai số rất lớn =======
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

const ll mod = 1e9 + 7;

string solve(string x, string y)
{

    string res = "";
    int len_max = max(x.length(), y.length());
    while (x.length() < len_max)
        x = "0" + x;
    while (y.length() < len_max)
        y = "0" + y;
    int remember = 0;
    for (int i = len_max - 1; i >= 0; i--)
    {
        int n1 = x[i] - '0';
        int n2 = y[i] - '0';
        int s = n1 + n2 + remember;
        char res_tmp = s % 10 + '0';
        res = res_tmp + res;
        remember = s / 10;
    }
    if (remember != 0)
    {
        return char(remember + '0') + res;
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string x, y;
        cin >> x >> y;
        string ans =solve(x, y);
        cout<<ans<<endl;
    }
}