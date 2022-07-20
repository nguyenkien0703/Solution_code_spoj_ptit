#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

void khoitao(int a[], string num, int n)
{
    for (int i = 0; i < num.length(); i++)
    {
        a[i + 1] = (num[i] - '0');
    }
}

void xuat(int a[], int n, int dem)
{
    cout << dem << " ";
    for (int i = 1; i <= n; i++)
    {
        cout << a[i];
    }
    cout << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int dem;
        string num;
        int a[90];
        cin >> dem >> num;
        int n = num.length();
        khoitao(a, num, n);
        
        if (next_permutation(a + 1, a + n + 1))
        {   //nếu chưa là cấu hình cuối cùng 
            cout << dem << " ";
            for (int i = 1; i <= n; i++)
            {
                cout << a[i];
            }
            cout << endl;
        }
        else
        {   //nêý là cấu hình cuối cùng 
            cout << dem << " ";

            cout << "BIGGEST";
            cout << endl;
        }
    }
    return 0;
}