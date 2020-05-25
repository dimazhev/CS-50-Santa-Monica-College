#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

/*Name: Dmitriy Zhevelev
Assignment 2 */

int main()
{
	int num_count = 0;
	float min_in;
	float max_in;
	float total = 0;
	float input = -1;
	bool first_time = true;
	float average;

	while (input != 0)
	{
		scanf_s("%f", &input);
		num_count++;
		if (first_time)
		{
			min_in = input;
			max_in = input;
			first_time = false;
		}

		if (input != 0 && input < min_in)
		{
			min_in = input;
		}
		if (input != 0 && input > max_in)
		{
			max_in = input;
		}
		total += input;  /* total = total + input*/

	}
	num_count--;
	printf("Counter %d\n", num_count);
	printf("The minimum entry was: %.2f\n", min_in);
	printf("The maximum entry was: %.2f\n", max_in);
	if (num_count)
	{
		average = total / num_count;
		printf("The average of all entries was: %.2f\n", average);
	}


	system("pause");
}

