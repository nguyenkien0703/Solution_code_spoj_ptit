#include <iostream>
#include <math.h>
using namespace std;
 
int main ()
{
	long n;
	cin>>n;
	long dem=0;
	for (long i=1; i<=n; i++)
	{
		for (long j=i; j<=n; j++)
		{
			long so=sqrt (i*i + j*j);
			if (so*so-j*j==i*i && so<=n)
			{
				dem++;
			}
		}
	}
	cout<<dem;
	return 0;
}