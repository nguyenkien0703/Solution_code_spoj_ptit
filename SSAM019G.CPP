/*

https://www.spoj.com/PTIT/problems/SSAM019G/
SSAM019G - DÃY XÂU FIBONACI

Một dãy xâu ký tự G chỉ bao gồm các chữ cái A và B được gọi là dãy xâu Fibonacci nếu thỏa mãn tính chất:    G(1) = A; G(2) = B; G(n) = G(n-2)+G(n-1). Với phép cộng (+) là phép nối hai xâu với nhau.  Bài toán đặt ra là tìm ký tự ở vị trí thứ i (tính từ 1) của xâu Fibonacci thứ n.

Dữ liệu vào: Dòng 1 ghi số bộ test. Mỗi bộ test ghi trên một dòng 2 số nguyên N và i (1<N<93). Số i đảm bảo trong phạm vi của xâu G(N) và không quá 18 chữ số. Kết quả: Ghi ra màn hình kết quả tương ứng với từng bộ test.

Input

Output

2

6 4

8 19

A

B
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, k;
void init()
{
    cin >> n >> k;
}
ll fb[100] = {0};
ll finbo(int n)
{
    if (n == 1 || n == 2)
        return 1;
    if (fb[n])
        return fb[n];
    fb[n] = finbo(n - 1) + finbo(n - 2);
    return fb[n];
}
void sinh(){
    finbo(92);
}
int Try(int k, int n)
{
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;
    if (n == 3 && k == 1)
    {
        return k;
    }
    if (n == 3 && k == 2)
        return k;

    if (n == 4)
    {
        if (k % 2 == 1)
        {
            return 2;
        }
        else
            return 1;
    }

    if (k > fb[n - 2])
        return Try(k - fb[n - 2], n - 1);
    else
    {
        return Try(k, n - 2);
    }
}
void solve()
{
    int l = Try(k, n);
    if (l == 1)
    {
        cout << "A\n";
    }
    else
    {
        cout << "B\n";
    }
}

int main()
{
    int t;
    cin >> t;
    sinh();
    cin.ignore();
    while (t--)
    {
        init();
        solve();
    }
}