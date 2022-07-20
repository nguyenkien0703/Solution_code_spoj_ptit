//https://www.spoj.com/PTIT/problems/P162SUMH/
#include <iostream>
#include <string>
using namespace std;
 
int main ()
{
	string xau;
	cin>>xau;
	int t=0;
	for (int i=0; i<xau.length(); i++)
	{
		if (xau[i]=='A' || xau[i]=='B' || xau[i]=='C') t+=3;
		if (xau[i]=='D' || xau[i]=='E' || xau[i]=='F') t+=4;
		if (xau[i]=='G' || xau[i]=='H' || xau[i]=='I') t+=5;
		if (xau[i]=='J' || xau[i]=='K' || xau[i]=='L') t+=6;
		if (xau[i]=='M' || xau[i]=='N' || xau[i]=='O') t+=7;
		if (xau[i]=='P' || xau[i]=='Q' || xau[i]=='R' || xau[i]=='S') t+=8;
		if (xau[i]=='T' || xau[i]=='U' || xau[i]=='V') t+=9;
		if (xau[i]=='W' || xau[i]=='X' || xau[i]=='Y' || xau[i]=='Z') t+=10;
	}
	cout<<t;
	return 0;
}