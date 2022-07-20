#include <bits/stdc++.h>
using namespace std;

int n, k, a[100];
void inkq()
{
    for (int i = 1; i <= k; i++)
    {
        cout << a[i];
    }
    cout << endl;
}



void Try(int i)
{
    for (int j = a[i - 1] + 1; j <= n - k + i; j++)
    {
        a[i] = j;
        if (i == k)
        {
            inkq();
        }
        else
        {
            Try(i + 1);
        }
    }
}



int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        cin >> n >> k;
        Try(1);
    }
    return 0;
}