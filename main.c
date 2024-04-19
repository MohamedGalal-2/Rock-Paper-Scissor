#include <stdio.h>

int flag = 0;
int player_points = 0;
int computer_points = 0;
int player_choice = 0;
int computer_choice = 0;

int main()
{
	// Display the welcome message
	cyan();
	printf("Welcome to Rock Paper Scissor game :)\n\n");
	reset();

	while (flag != 1)
	{
		// Display the score
		blue();
		printf("Score-> Player: %i | Computer: %i \n", player_points, computer_points);
		reset();

		// Display the choices
		printf("Please enter your choice: \n");
		green();
		printf("1. Rock\n");
		printf("2. Paper\n");
		printf("3. Scissor\n");
		reset();
		
		// Get the user choice
		scanf("%i", &player_choice);

		// Check if the choice is valid	
		if(player_choice <1 || player_choice >3)
		{
			printf("Invalid choice! Please try again.\n");
			continue;
		}

		// Get the computer choice
		computer_choice = rand() % 3 + 1;

		if (player_choice == computer_choice)
		{
			printf("It's a draw!\n");
		}
		else if (player_choice == 1 && computer_choice == 3)
		{
			printf("Player wins!\n");
			player_points++;
		}
		else if (player_choice == 2 && computer_choice == 1)
		{
			printf("Player wins!\n");
			player_points++;
		}
		else if (player_choice == 3 && computer_choice == 2)
		{
			printf("Player wins!\n");
			player_points++;
		}
		else
		{
			printf("Computer wins!\n");
			computer_points++;
		}

		// Ask the user if they want to exit the game
		printf("Do you want to exit the game? (1 for yes, 0 for no)\n");
		scanf("%i", &flag);
	}

	return 0;
}