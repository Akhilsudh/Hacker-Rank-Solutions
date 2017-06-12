#include <stdio.h>

int main()
{
	int x1, x2, v1, v2, flag = 1;
	scanf("%d%d%d%d", &x1, &v1, &x2, &v2);
	if((x1 < x2) && (v1 < v2))
	{
		printf("NO");
		flag = 0;
	}
	while(flag)
	{
		if(x1 == x2)
		{
			printf("YES");
			break;
		}
		else if(x1 > x2)
		{
			printf("NO");
			break;
		}
		if(x1 < x2)
		{
			x1 += v1;
			x2 += v2;
		}
	}
	return 0;
}