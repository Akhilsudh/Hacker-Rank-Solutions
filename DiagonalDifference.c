#include <stdio.h>
#include <math.h>

int main()
{
	int i, j, n;
	int A = 0, B = 0;
	scanf("%d", &n);
	int arr[n][n];
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	for(i = 0; i < n; i++)
	{
		A += arr[i][i];
		B += arr[i][(n - 1) - i];  
	}
	printf("%d", abs(A-B));
	
	return 0;
}
