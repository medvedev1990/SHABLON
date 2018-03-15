#include<iostream>
#include<stdio.h>
#include<locale.h>
#include"Header.h"
#include<time.h>

int i, j;
void ZappMass(int *mass, int *row)
{
	for (i = 0;i < *row;i++)
		*(mass + i) = 0 + rand() % 20;
}
void PrintMass(int *mass, int *row)
{
	for (i = 0;i < *row;i++)
		printf("%d\t", *(mass + i));
	printf("\n--------------------------------------\n");
}
void SortingMass(int *mass, int *row)
{
	int m;
	for (i = 0;i < *row;i++)
	{
		for (j = *row - 1;j >= i;j--)
		{
			if (*(mass + j) < *(mass + (j - 1)))
			{
				m = *(mass + j);
				*(mass + j) = *(mass + (j - 1));
				*(mass + (j - 1)) = m;
			}
		}
	}
}
