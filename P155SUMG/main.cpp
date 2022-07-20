#include <iostream>
using namespace std;
 
int main ()
{
	int n, m;
	cin>>n>>m;
	int L=1;	//=1: Xavi;
	while (1)
	{
		if (n==0 || m==0) break;
		n--;
		m--;
		if (L==1) L=2;
		else L=1;
	}
	if (L==1) cout<<"Wilshere";
	else cout<<"Xavi";
	return 0;
}