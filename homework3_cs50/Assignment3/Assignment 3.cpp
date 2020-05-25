#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <time.h>

/*Name: Dmitriy Zhevelev
Assignment #3  */

float deposit(float balance, float amount);
//float withdrawal(float balance, float withdrawalAmount);
void withdrawal(float *balance, float amount);

int main()
{
	int choice;
	float balance = 300;
	float amount;

	printf("*****************************************************\n");
	printf("*                  Bank Menu:                       *\n");
	printf("*Press 1 to show Balance                            *\n");
	printf("*Press 2 to Make a Deposit                          *\n");
	printf("*press 3 to Make a Withdrawal                       *\n");
	printf("*Press 4 to quit                                    *\n");
	printf("*****************************************************\n");
	printf("\n");

	do
	{
		printf("Please Enter Your Choice: ");
		scanf_s("%d", &choice);

		switch (choice)
		{
		case 1:
			printf("Your balance is : %.2f\n", balance);
			break;

		case 2:
			printf("How Much Would You Like to Deposit?");
			scanf_s("%f", &amount);
			balance = deposit(balance, amount);
			break;

		case 3:
			printf("How much Would You Like to Withdraw? ");
			scanf_s("%f", &amount);
			withdrawal(&balance, amount);
			break;

		case 4:
			break;

		default:
			printf("Error! Please Only enter Numbers 1-4. Please try again!\n");


		}
	} while (choice != 4);

	system("pause");


}


float deposit(float balance, float amount)
{
	if (amount > 10000.00 || amount < 0.00)
	{
		printf("amount is invalid\n");
		return balance;
	}

	balance += amount;
	return balance;

}


/*float withdrawal(float balance, float withdrawalAmount)
{
	if (withdrawalAmount < 0.00 || (balance - withdrawalAmount) <= 10.00)
	{
		printf("Invalid Withdrawal\n");
		return balance;
	}

	balance = balance - withdrawalAmount;
	return balance;
}*/

void withdrawal(float *balancePt, float amount)
{
	if (amount < 0.00 || *balancePt - amount <= 10)
	{
		printf("Invalid Withdrawal\n");

	}

	*balancePt -= amount;

}