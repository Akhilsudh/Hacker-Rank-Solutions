#include <stdio.h>

int main()
{
	int n, num, div;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &num);
		if((num % 5) != 0)
		{
			div = num/5 + 1;
			if((((div*5) - num) < 3) && num >= 38)
				printf("%d\n", div * 5);
			else
				printf("%d\n", num);
		}
		else
			printf("%d\n", num);
	}
	return 0;
}