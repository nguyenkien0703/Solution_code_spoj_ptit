#include <iostream>
#include <cmath>
#define ll long long
using namespace std;
/*
- Với mỗi số ban đầu kt xem có phải nguyên tố hay không? true: d++;
- Tìm i:n->n/2: với mỗi i là snt thì ta tìm một dãy snt liên tiếp từ i đó;
- Dãy đó tổng == n thì d++;

*/
ll nt(ll n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return n > 1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int cnt = 0;
        if (nt(n))
            ++cnt;//nếu nó  là snt thì chính nó cũng có 1 csch biểu diễn , đo là chính nó có 1 
            
        for (int i = 2; i <= n / 2; i++)
        {
            int sum = 0;
            if (nt(i))
            {
                for (int j = i; i <= n; j++)
                {
                    if (nt(j))
                    {
                        sum += j;
                        if (sum == n)
                            ++cnt;
                        if (sum > n)
                            break;
                    }
                }
            }
        }
        cout << cnt << endl;
    }
}