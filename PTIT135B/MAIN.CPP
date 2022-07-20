#include <iostream>
using namespace std;
 
struct data
{
	int D, R, G;
	char status;
	int total;
	int t_now;
} typedef data;
 
int main ()
{
	int n, l;
	cin>>n>>l;
	data Tr_lights[102];
	for (int i=1; i<=n; i++)
	{
		cin>>Tr_lights[i].D>>Tr_lights[i].R>>Tr_lights[i].G;
		Tr_lights[i].total=Tr_lights[i].R+Tr_lights[i].G;
		Tr_lights[i].t_now=0;
		Tr_lights[i].status='R';
	}
	int Begin=0;
	int t=0;
	for (int i=1; i<=n; i++)
	{
		int leng = Tr_lights[i].D-Begin;
		Begin = Tr_lights[i].D;
		t+=leng;
		for (int j=i; j<=n; j++)
		{
			Tr_lights[j].t_now+=leng;
			Tr_lights[j].t_now=Tr_lights[j].t_now % Tr_lights[j].total;
			if (Tr_lights[j].t_now>=0 && Tr_lights[j].t_now<Tr_lights[j].R) Tr_lights[j].status='R';
			else Tr_lights[j].status='G';
		}
		if (Tr_lights[i].status=='G') continue;
		else if (Tr_lights[i].status=='R')
		{
			leng = Tr_lights[i].R-Tr_lights[i].t_now;
			t+=leng;
			for (int j=i+1; j<=n; j++)
			{
				Tr_lights[j].t_now+=leng;
				Tr_lights[j].t_now=Tr_lights[j].t_now % Tr_lights[j].total;
				if (Tr_lights[j].t_now>=0 && Tr_lights[j].t_now<Tr_lights[j].R) Tr_lights[j].status='R';
				else Tr_lights[j].status='G';
			}
		}
	}
	t+=l-Begin;
	cout<<t;
	return 0;
}