#include <stdio.h>

int main()
{
	float p = 0, n = 0, z = 0;
	int N;
	int num;
	scanf("%d", &N);
	for(int i = 0; i < N; i++)
	{
		scanf("%d", &num);
		if(num > 0)
			p += 1;
		if(num < 0)
			n += 1;
		if(num == 0)
			z += 1;	
	}
	printf("%f\n%f\n%f", p/N, n/N, z/N);
	return 0;
}
