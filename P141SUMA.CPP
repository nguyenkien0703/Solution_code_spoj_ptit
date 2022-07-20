/*

PTIT135I - Nhìn và d?c
Phép bi?n d?i "nhìn và d?c" du?c d?nh nghia nhu sau:

B?t d?u t? s? ? d?u tiên X. V?i các s? gi?ng nhau thì nhóm l?i thành m?t dãy (gi? s? có Y s?) thì dãy này du?c chuy?n thành YX.

Ví d? 122344111 d?c là "m?t 1, hai 2, m?t 3, hai 4, ba 1", do dó chu?i 122344111 chuy?n thành 1122132431.

Input
Dòng d?u ch?a s? b? test: 

M?i dòng sau ch?a 1 b? test ch?a chu?i c?n bi?n d?i (không quá 1000 ch? s?)

Output
V?i m?i b? test, in ra k?t qu? phép bi?n d?i

Example
Input:
312234411111111111123453
122344111
1111111111
12345

Output:
1122132431
101
1112131415

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
    //bbài này search trên mạng thấy có công thức  này nhé 
    
    ios_base::sync_with_stdio(0);
    cin.tie(0);
	ll ax,ay,bx,by,cx,cy;
	cin>>ax>>ay>>bx>>by>>cx>>cy;
	ll k =(bx-ax)*(cy-ay) - (cx-ax)*(by-ay);
	if(k==0){
		cout<<"TOWARDS";
	}else if(k<0){
		cout<<"RIGHT";
	}else cout<<"LEFT";
}