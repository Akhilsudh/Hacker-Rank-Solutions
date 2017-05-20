#include <stdio.h>

int main()
{
	int N;
	scanf("%d", &N);
	int sumArray[N];
	long Sum = 0;
	for(int index = 0; index < N; index++)
	{
		scanf("%d", &sumArray[index]);
		Sum += sumArray[index]; 
	}
	printf("%ld", Sum);
	return 0;
}
