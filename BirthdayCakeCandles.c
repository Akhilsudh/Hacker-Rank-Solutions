#include <stdio.h>

int main()
{
	int n, max = 0, count = 0;
	scanf("%d", &n);
	int h[n];
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &h[i]);
		if(h[i] > max)
		{	
			count = 0;
			max = h[i];
			count++;
		}
		else if(h[i] == max)
		{
			count++;
		}
	}
	printf("%d", count);
	return 0;
}
