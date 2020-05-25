
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void printData(const double * a, int n);
void getInput(double * a, int n);
int main()
{
	double * x = NULL;
	int num;
	printf("How many:");
	scanf_s("%d", &num);
	x  =(double *) malloc(sizeof(double)*num); 
	getInput(x,num); 
	printData(x,num);
	system("pause");
	return 0;
}

void printData(const double * a, int n)
{
	int i;
	for(i = 0; i < n ; i++)
	{
		printf("Enter data:%.2f",a[i]);
		printf("\n");
	}
}
void getInput(double * a, int n)
{
	int i;
	for(i = 0; i < n ; i++)
	{
		printf("Enter data:");
		scanf_s("%lf",&a[i]);
	}
}
