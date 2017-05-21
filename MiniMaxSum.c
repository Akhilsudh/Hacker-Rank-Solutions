#include <stdio.h>

int main()
{
	long minSum = 0, maxSum = 0, Sum = 0;
	long temp;
	int count = 0;
	long arr[5];
	for(int i = 0; i < 5; i++)
	{
		scanf("%ld", &arr[i]);
	}
	while(count != 5)
	{
		if(minSum != 0 && maxSum != 0)
		{
			for(int i = 0; i < 5; i++)
			{
				if(i != count)
				{
					Sum += arr[i];
				}
			}
			if(Sum > maxSum)
			{
				maxSum = Sum;
			}
			if(Sum < minSum)
			{
				minSum = Sum;
			}
			Sum = 0;
		}
		else if(minSum == 0 && maxSum == 0)
		{
			for(int i = 1; i < 5; i++)
			{
					minSum += arr[i];
					maxSum += arr[i];
			}
		}
		count++;
	}
	printf("%ld %ld", minSum, maxSum);
	return 0;
}
