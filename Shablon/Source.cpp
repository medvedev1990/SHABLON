#include<iostream>
#include<stdio.h>
#include<locale.h>
#include"Header.h"
#include<time.h>

void main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	short int n, exit;
	do
	{
		printf("please enter number of a task?: ");
		scanf("%hu", &n);
		switch (n)
		{
		case 1:
		{
			
		}
		break;
		default:printf("There is no task! Please enter number of a task\n");
			break;
		}
		printf("To continue? 1-Yes 2-No: ");
		scanf("%hu", &exit);
		printf("\n");
	} while (exit == 1);
}