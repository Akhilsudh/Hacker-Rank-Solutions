#include <stdio.h>

int main()
{
	int N;
	scanf("%d", &N);
	int sumArray[N];
	int Sum = 0;
	for(int index = 0; index < N; index++)
	{
		scanf("%d", &sumArray[index]);
		Sum += sumArray[index]; 
	}
	printf("%d", Sum);
	return 0;
}
