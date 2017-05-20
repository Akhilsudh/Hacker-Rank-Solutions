#include <stdio.h>

void compareTriplets(int a0, int a1, int a2, int b0, int b1, int b2)
{
	int A = 0, B = 0;
	if(a0 > b0)
	{
		A += 1;
	}
	else if(a0 < b0)
	{
		B += 1;
	}
	
	if(a1 > b1)
	{
		A += 1;
	}
	else if(a1 < b1)
	{
		B += 1;
	}
	
	if(a2 > b2)
	{
		A += 1;
	}
	else if(a2 < b2)
	{
		B += 1;
	}
	
	printf("%d %d", A, B);
}

int main()
{
	int a0, a1, a2;
	int b0, b1, b2;
	scanf("%d %d %d", &a0, &a1, &a2);
	scanf("%d %d %d", &b0, &b1, &b2);
	compareTriplets(a0, a1, a2, b0, b1, b2);
}
