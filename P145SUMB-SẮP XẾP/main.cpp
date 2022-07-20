#include <iostream>
using namespace std;
 
int main ()
{
	int n, m;
	cin>>n>>m;
	int dem1=0;
	int dem1p=0;
	int x;
	for (int i=1; i<=n; i++)
	{
		cin>>x;
		if (x==1) dem1++;
		else dem1p++;
	}
	int l, r;
	for (int i=1; i<=m; i++)
	{
		cin>>l>>r;
		if ((r-l+1)%2==0)
		{
			if (dem1 >= (r-l+1)/2 && dem1p >= (r-l+1)/2) cout<<"1"<<endl;
			else cout<<"0"<<endl;
		}
		else
		{
			cout<<"0"<<endl;
		}
	}
	return 0;
}