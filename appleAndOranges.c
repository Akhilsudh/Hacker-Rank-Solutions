#include <stdio.h>

int main()
{
	int aCount = 0, oCount = 0;
	int s,t,a,b,m,n,i;
	scanf("%d%d%d%d%d%d", &s, &t, &a, &b, &m, &n);
	int aPos[m];
	int oPos[n];
	for(i = 0; i < m; i++)
	{
		scanf("%d", &aPos[i]);
		if((aPos[i]+a >= s) && (aPos[i]+a <= t))
			aCount++;
	}
	for(i = 0; i < n; i++)
	{
		scanf("%d", &oPos[i]);
		if((oPos[i]+b >= s) && (oPos[i]+b <= t))
			oCount++;
	}
	printf("%d\n%d", aCount, oCount);
	return 0;
}