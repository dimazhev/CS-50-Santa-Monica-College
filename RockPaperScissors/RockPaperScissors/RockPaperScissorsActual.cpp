#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <time.h>

/*Name: Dmitriy Zhevelev
Rock Paper Scissors Assignment */
char userChoice();
char computerChoice();
void determineWinner(char user, char choice);
void playAgain();
void game();


int main()
{
	srand(time(NULL));
	game();

	return 0;
}

char computerChoice()
{
	int r = rand() % 3 + 1;

	if (r == 1)
		return 'r';
	else if (r == 2)
		return 'p';
	else
		return 's';
}

char userChoice()
{
	char x;
	printf("Enter r, s, or p:");
	x = getchar();
	// Clean the buffer
	while (getchar() != '\n');

	return x;

}


void determineWinner(char userCh, char computerCh)
{
	if (userCh == 'r' && computerCh == 's')
		printf("User Wins! Rock Smashes Scissors!\n");
	else if (userCh == 's' && computerCh == 'r')
		printf("Computer wins! Rock Smashers Scissors!\n");
	else if (userCh == 's' && computerCh == 'p')
		printf("User wins! Scissors cut Paper!\n");
	else if (userCh == 'p' && computerCh == 's')
		printf("Computer wins! Scissors cut Paper!\n");
	else if (userCh == 'p' && computerCh == 'r')
		printf("User wins! Paper Covers Rock!\n");
	else if (userCh == 'r' && computerCh == 'p')
		printf("Computer wins! Paper Covers Rock!\n");
	else if (userCh == computerCh)
		printf("DRAW! THERE IS NO WINNER\n");
	else
		printf("User has entered an invalid choice!");



}

void playAgain()
{

	char answer;
	printf("Do you want to play again?! Y or N?");
	answer = getchar();
	while (getchar() != '\n');
	if (answer == 'Y' || answer == 'y')
	{
		game();
	}

}

void game()
{
	char userCh, compCh;
	userCh = userChoice();
	printf("you choose %c\n", userCh);
	compCh = computerChoice();
	printf("Computer choose %c\n", compCh);
	determineWinner(userCh, compCh);

	playAgain();
}