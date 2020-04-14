#include <stdio.h>
#include <conio.h>
#define size 8

int main(void)
{
	int M[size] = { 10, 2, 10, 8, 10, 8, 7, 6};
	int max = M[0], min = M[0];
	int maxIndex;
	for (int i = 0;i < size;i++)
	{
		if (max < M[i])
		{
			max = M[i];
		}

		else if (M[i] < min)
		{
			min = M[i];
		}
	}

	int k = 0;
	for (int i = 0;i < size;i++)
	{
		if (M[i] != max)
		{
			M[k++] = M[i];
		}
		else
		{
			maxIndex = i;
		}
	}
	for (int i = maxIndex;i >= maxIndex;i--)
	{
		M[i + 1] = M[i];
	}
	M[maxIndex] = min;

	for (int i = 0;i < k+1;i++)
	{
		printf("M = %i ", M[i]);
	}
	printf("\nk = %i", k);
	return 0;
}
