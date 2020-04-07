/*
#include <stdio.h>
#include <conio.h>
#define size 8

int main(void)
{
	int M[size] = { 10, 2, 10, 8, 10, 8, 5, 8 };
	int mx = M[0], min = M[0];
	for (int i = 0;i < size;i++)
	{
		if (mx < M[i])
			mx = M[i];
	}
	for (int i = 0;i < size;i++)
	{
		if (M[i] < min)
			min = M[i];
	}
	int k = 0;
	for (int i = 0;i < size;i++)
	{
		if (M[i] == mx)
		{
			M[i] = M[i+1];
		}
		else
		{
			M[k++] = M[i];
		}
	}
	M[k] = min;

	for (int i = 0;i < size;i++)
	{
		printf("M = %i ", M[i]);
	}
	printf("\nk = %i", k);
	return 0;
}*/



