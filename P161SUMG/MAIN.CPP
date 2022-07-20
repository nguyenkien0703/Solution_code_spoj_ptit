
//Nếu tổng số tiền của họ chia hết cho 5 thì sẽ chia đều được thôi 


#include <iostream>
using namespace std;
 
int main ()
{
	int a, b, c, d, e;
	cin>>a>>b>>c>>d>>e;
	int sum=a+b+c+d+e;
	if (sum%5==0 && sum!=0) cout<<sum/5;
	else cout<<"-1";
	return 0;
}