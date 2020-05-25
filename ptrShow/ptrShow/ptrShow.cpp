#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
	char x[7] = "123456";
	const char * a = "abcd";
	int i,size;
	printf(a);
	printf("\n");
	size = strlen(a);
	printf("====>>%d\n",strlen(a));
	while( *a != '\0')
	{
		printf("%c\n",*a);
		a++;
	}
	a = a - size;printf("*********************\n");
	for(i = 0 ; i < strlen(a); i++)
		printf("=====%c\n",a[i]);
	system("pause");
	return 0;
}
void seeThis()
{
	int * p ;
	p = (int *) malloc(1* sizeof(int));
	printf("Enter:");
	scanf_s("%d", p);
	printf("====>>%d\n",p);
	p = NULL;
}