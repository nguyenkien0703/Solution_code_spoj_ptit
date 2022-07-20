#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main()
{

	// bài này có mẹo
	// nó đưa hết vòa mảng hai chiều , t hiểu như lâf
	//  nếu có 1 cặp xuất hiện giống nhau nhiều lần thì đó chính là đáp nma s
	//  còn k , csac cặp khác nhau thì đáp án là 1
	int i, j, a[24][61], n, dem = 0, x, y;
	scanf("%d", &n);
	for (i = 0; i <= 23; i++)
	{
		for(j = 0; j <= 59; j++)
			a[i][j] = 0;
	}

	for (i = 0; i < n; i++)
	{

		scanf("%d%d", &x, &y);
		a[x][y]++;
		if (dem < a[x][y])
			dem = a[x][y];
	}

	printf("%d", dem);
}


