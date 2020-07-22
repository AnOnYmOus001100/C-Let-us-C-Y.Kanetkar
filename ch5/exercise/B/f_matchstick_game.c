/*
	Author: AnOnYmOus001100
	Date: 22/07/2020
	Description: A matchstick game between user and computer. The computer always wins.
		    Rules: 
			* There are 21 matchsticks.
			* The computer asks the player to pick 1, 2, 3, or 4 matchsticks.
			* After the person picks, the computer does its picking.
			* Whoever is forced to pick up the matchstick loses the game.
*/

#include<stdio.h>

int main()
{

	int matches_remaining = 21, user_choice, computer_choice, win = 0;

	printf ("---------------------------------------Welcome to Matchstick picking Game--------------------------------");
	printf ("\nHere are the rules: \n*There are 21 matches \n* Start by choosing 1, 2, 3 or 4 matches \n*The last one forced to pick will lose.");

	// picking goes on as long as there are no more matchsticks
	while (matches_remaining > 0)
	 {
	  // #users turn
		printf ("\n\nYour turn, Pick 1, 2, 3 or 4 matchsticks: ");
		scanf ("%d",&user_choice);
	
		// invalid user choice
		if (user_choice < 1 || user_choice > 4 && user_choice > matches_remaining)
			do
			{
				printf ("\nInvalid choice, Pick 1, 2, 3 or 4 matchsticks: ");
				scanf ("%d",&user_choice);
		

				if (user_choice >=1 && user_choice <=4 && user_choice <= matches_remaining)
					break;
			}while(1);
		 
		matches_remaining -= user_choice;	// subtracting user_choice from remaining matches	
	
		printf ("\n\nRemaining Matchsticks: %d",matches_remaining);
		
		// checking win
		if (matches_remaining == 0)
			win = 0;

	  // #computers turn
		printf ("\nMy turn now, please wait... ");
		
		// computer picking logic
		if (matches_remaining > 4)
		   {
		     if (matches_remaining % 2 == 0)
			computer_choice = 3;
		     else
			computer_choice = 4;
		   }

		else
		 {
		   if (matches_remaining ==  4)
			computer_choice = 3;
		   else if (matches_remaining == 3)
			computer_choice = 2;
		   else
			computer_choice = 1;
		}
		   
	     printf ("\n I picked %d matchsticks.",computer_choice);
	     
	     matches_remaining -= computer_choice;	// subtracting computer_choice from remaining matches
		
	    printf ("\nRemaining Matchsticks: %d",matches_remaining);
	
	    // checking win
	    if (matches_remaining == 0)
		win = 1;	
	}

	if (win == 1)
		printf ("\n\n----I Won!!!----\n Sorry, better try next time.");
	else
		printf ("\n\n----Congratulations, You Won!!!----\n Well played.");

	return 0;
}
