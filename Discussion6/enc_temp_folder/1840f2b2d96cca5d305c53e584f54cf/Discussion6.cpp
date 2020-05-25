#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

/*Name: Dmitriy Zhevelev
Discussion 6 */
int  foo(int x);

int main()
{
	int x = 10;
	printf("Value of X = %d\n", foo(x - 1));
	system("pause");
}

int  foo(int y)
{
	if (y <= 1)
	{
		printf("Value of Y= %d\n", y);
		return y;
	}
	printf("Value of Y - 1 = %d\n", y - 1);
	return foo (y-1);
}