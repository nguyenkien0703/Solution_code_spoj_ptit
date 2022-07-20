#include <iostream>
#include <math.h>
using namespace std;
#define ll long long 
// Ý tưởng: giả sử 3 cạnh hình hộp là a,b,c ta có ab=x;ac=y;bc=z

// suy ra a^2*b^2*c^2 = x*y*z suy ra abc = sqrt(xyz)= t
// ta có
// a=abc/(bc) = t/z
// b=abc/(ac) = t/y
// c=abc/(ab) = t/x
int main ()
{
	ll a, b , c;
    cin>>a>>b>>c;
    ll tichbacanh=sqrt(a*b*c);
    ll canh1=tichbacanh/b;
    ll canh2=tichbacanh/a;
    ll canh3=tichbacanh/c;
    cout<<canh1*4+canh2*4+canh3*4<<endl;

	return 0;
}