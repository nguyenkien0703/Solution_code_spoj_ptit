
#include <iostream>
using namespace std;
 
int main ()
{
	int n;
	cin>>n;
	int count=0;
	for (int i=1; i<=n; i++)
	{
		int cs=0;
		int countS=0;	//S: Solution =))
		for (int j=1; j<=3; j++)
		{
			cin>>cs;
			if (cs==1) countS++;
		}
		if (countS>=2) count++; 
	}
	cout<<count;
	return 0;
}

