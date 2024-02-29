/*/////////////////////////////////////////////////////////////////////////
						  Workshop - #6 (P1)
Full Name  : Naiba Shabanova
Student ID#: 
Email      : nshabanova@myseneca.ca
Section    : 

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#define _CRT_SECURE_NO_WARNINGS

#define MAX_FORECAST_ITEMS 10

#include <stdio.h>

int main(void)
{
	printf("+--------------------------+\n");
	printf("+   Wish List Forecaster   |\n");
	printf("+--------------------------+\n");
	printf("\n");

	double income = 0.0f;
	const double MIN_INCOME = 500.00f;
	const double MAX_INCOME = 400000.00f;
	do
	{
		printf("Enter your monthly NET income: $");
		scanf("%lf", &income);

		if (income < MIN_INCOME)
		{
			printf("ERROR: You must have a consistent monthly income of at least $500.00\n");
		}
		else if (income > MAX_INCOME)
		{
			printf("ERROR: Liar! I'll believe you if you enter a value no more than $400000.00\n");
		}
		printf("\n");
	} while (income < MIN_INCOME || income > MAX_INCOME);

	int forecastItems = 0;
	do
	{
		printf("How many wish list items do you want to forecast?: ");
		scanf("%d", &forecastItems);
		if (forecastItems < 1 || forecastItems > MAX_FORECAST_ITEMS)
		{
			printf("ERROR: List is restricted to between 1 and 10 items.\n");
		}
		printf("\n");
	} while (forecastItems < 1 || forecastItems > MAX_FORECAST_ITEMS);

	double MIN_COST = 100.0f;
	double costs[forecastItems];
	int importances[forecastItems];
	char finOptions[forecastItems];
	int i = 0;
	int flag = 1;
	for (i = 0; i < forecastItems; i++)
	{
		printf("Item-%d Details:\n", i + 1);
		// cost
		flag = 1;
		do
		{
			printf("   Item cost: $");
			scanf("%lf", &costs[i]);
			if (costs[i] >= MIN_COST)
			{
				flag = 0;
			}
			else
			{
				printf("      ERROR: Cost must be at least $100.00\n");
			}
		} while (flag);

		// importance
		flag = 1;
		do
		{
			printf("   How important is it to you? [1=must have, 2=important, 3=want]: ");
			scanf("%d", &importances[i]);
			if (importances[i] >= 1 && importances[i] <= 3)
			{
				flag = 0;
			}
			else
			{
				printf("      ERROR: Value must be between 1 and 3\n");
			}
		} while (flag);

		// financing option
		flag = 1;
		do
		{
			printf("   Does this item have financing options? [y/n]: ");
			scanf(" %c", &finOptions[i]);
			if (finOptions[i] == 'y' || finOptions[i] == 'n')
			{
				flag = 0;
			}
			else
			{
				printf("      ERROR: Must be a lowercase 'y' or 'n'\n");
			}
		} while (flag);

		printf("\n");
	}

	double sum = 0.0f;
	printf("Item Priority Financed        Cost\n");
	printf("---- -------- -------- -----------\n");
	for (i = 0; i < forecastItems; i++)
	{
		printf("%3d  %5d    %5c    %11.2lf\n", i + 1,
			   importances[i], finOptions[i], costs[i]);
		sum += costs[i];
	}
	printf("---- -------- -------- -----------\n");
	printf("                      $%11.2lf\n", sum);
	printf("\n");
	printf("Best of luck in all your future endeavours!\n");
	printf("\n");
	return 0;
}

/*
	HELPER: printf formatting statements....
	=========================================

	Step #7:
		printf("Item Priority Financed        Cost\n");
		printf("---- -------- -------- -----------\n");

		printf("%3d  %5d    %5c    %11.2lf\n", ...


	Step #8:
		printf("---- -------- -------- -----------\n");
		printf("                      $%11.2lf\n\n", ...

*/