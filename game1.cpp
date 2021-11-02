#include <conio.h>
#include "iGraphics.h"
#include <time.h>

int screenWidth = 1080, screenHeight = 720;
int playing = 0;
int startflag = 0;
int playerChoice = 0;
int cTurn = 0, compChoice = 0, aftercm = 1;


void iDraw()
{
	iClear();

	if (playing % 2 == 0)
	{
		playerChoice = 0;
		cTurn = 0;
		aftercm = 0;
		//
		iSetColor(252, 242, 14);
		iText(200, 500, "Welcome to Rock-Paper-Scissor-Lizard-Spock", GLUT_BITMAP_TIMES_ROMAN_24);
		iSetColor(255, 255, 255);
		iText(100, 450, "Rules:", GLUT_BITMAP_TIMES_ROMAN_24);
		iSetColor(255, 255, 255);
		iText(100, 400, "1 for Rock", GLUT_BITMAP_TIMES_ROMAN_24);
		iSetColor(255, 255, 255);
		iText(100, 350, "2 for Paper", GLUT_BITMAP_TIMES_ROMAN_24);
		iSetColor(255, 255, 255);
		iText(100, 300, "3 for Scissors", GLUT_BITMAP_TIMES_ROMAN_24);
		iSetColor(255, 255, 255);
		iText(100, 250, "4 for Lizard", GLUT_BITMAP_TIMES_ROMAN_24);
		iSetColor(255, 255, 255);
		iText(100, 200, "5 for Spock", GLUT_BITMAP_TIMES_ROMAN_24);
		//
		iSetColor(24, 231, 248);
		iText(100, 120, "Press 's' to begin ...", GLUT_BITMAP_TIMES_ROMAN_24);

	}
	else
	{
		iSetColor(252, 242, 14);
		iText(100, 400, "Enter your choice :", GLUT_BITMAP_TIMES_ROMAN_24);
		if (playerChoice == 1)
		{
			iSetColor(252, 242, 14);
			iText(290, 400, "Rock", GLUT_BITMAP_TIMES_ROMAN_24);
		}
		else if (playerChoice == 2)
		{
			iSetColor(252, 242, 14);
			iText(290, 400, "Paper", GLUT_BITMAP_TIMES_ROMAN_24);
		}
		else if (playerChoice == 3)
		{
			iSetColor(252, 242, 14);
			iText(290, 400, "Scissors", GLUT_BITMAP_TIMES_ROMAN_24);
		}
		else if (playerChoice == 4)
		{
			iSetColor(252, 242, 14);
			iText(290, 400, "Lizard", GLUT_BITMAP_TIMES_ROMAN_24);
		}
		else if (playerChoice == 5)
		{
			iSetColor(252, 242, 14);
			iText(290, 400, "Spock", GLUT_BITMAP_TIMES_ROMAN_24);
		}
		if (playerChoice != 0)
		{
			cTurn = 1;
		}
		//Computer choice..
		if (cTurn == 1)
		{
			iSetColor(255, 0, 255);
			iText(100, 350, "Computer's choice :", GLUT_BITMAP_TIMES_ROMAN_24);
			aftercm = 1;

		}
		if (aftercm == 1)
		{
			if (compChoice == 1)
			{
				iSetColor(255, 0, 255);
				iText(300, 350, "Rock", GLUT_BITMAP_TIMES_ROMAN_24);
			}
			else if (compChoice == 2)
			{
				iSetColor(255, 0, 255);
				iText(300, 350, "Paper", GLUT_BITMAP_TIMES_ROMAN_24);
			}
			else if (compChoice == 3)
			{
				iSetColor(255, 0, 255);
				iText(300, 350, "Scissors", GLUT_BITMAP_TIMES_ROMAN_24);
			}
			else if (compChoice == 4)
			{
				iSetColor(255, 0, 255);
				iText(300, 350, "Lizard", GLUT_BITMAP_TIMES_ROMAN_24);
			}
			else if (compChoice == 5)
			{
				iSetColor(255, 0, 255);
				iText(300, 350, "Spock", GLUT_BITMAP_TIMES_ROMAN_24);
			}
		}

		//result...

		if (playerChoice == 1)
		{
			if (compChoice == 1)
			{
				iSetColor(255, 0, 0);
				iText(100, 250, "Tie!", GLUT_BITMAP_TIMES_ROMAN_24);
			}
			else if (compChoice == 5)
			{
				iSetColor(255, 0, 0);
				iText(100, 250, "Spock vaporizes Rock", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(100, 200, "Computer Win", GLUT_BITMAP_TIMES_ROMAN_24);
			}
			else if (compChoice == 4)
			{
				iSetColor(255, 0, 0);
				iText(100, 250, "Rock crushes Lizard", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(100, 200, "You Win", GLUT_BITMAP_TIMES_ROMAN_24);
			}
			else if (compChoice == 2)
			{
				iSetColor(255, 0, 0);
				iText(100, 250, "Paper covers Rock", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(100, 200, "Computer Win", GLUT_BITMAP_TIMES_ROMAN_24);
			}
			else if (compChoice == 3)
			{
				iSetColor(255, 0, 0);
				iText(100, 250, "Rock crushes Scissor", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(100, 200, "You Win", GLUT_BITMAP_TIMES_ROMAN_24);
			}
		}

		else if (playerChoice == 2)
		{
			if (compChoice == 2)
			{
				iSetColor(255, 0, 0);
				iText(100, 250, "Tie!", GLUT_BITMAP_TIMES_ROMAN_24);
			}
			else if (compChoice == 5)
			{
				iSetColor(255, 0, 0);
				iText(100, 250, "Paper disproves Rock", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(100, 200, "You Win", GLUT_BITMAP_TIMES_ROMAN_24);
			}
			else if (compChoice == 4)
			{
				iSetColor(255, 0, 0);
				iText(100, 250, "Lizard eats Paper", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(100, 200, "Computer Win", GLUT_BITMAP_TIMES_ROMAN_24);
			}
			else if (compChoice == 1)
			{
				iSetColor(255, 0, 0);
				iText(100, 250, "Paper covers Rock", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(100, 200, "You Win", GLUT_BITMAP_TIMES_ROMAN_24);
			}
			else if (compChoice == 3)
			{
				iSetColor(255, 0, 0);
				iText(100, 250, "Scissors cut Paper", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(100, 200, "Computer Win", GLUT_BITMAP_TIMES_ROMAN_24);
			}
		}
		else if (playerChoice == 3)
		{
			if (compChoice == 3)
			{
				iSetColor(255, 0, 0);
				iText(100, 250, "Tie!", GLUT_BITMAP_TIMES_ROMAN_24);
			}
			else if (compChoice == 5)
			{
				iSetColor(255, 0, 0);
				iText(100, 250, "Spock distroys Scissors", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(100, 200, "Computer Win", GLUT_BITMAP_TIMES_ROMAN_24);
			}
			else if (compChoice == 4)
			{
				iSetColor(255, 0, 0);
				iText(100, 250, "Scissors beheads Lizard", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(100, 200, "You Win", GLUT_BITMAP_TIMES_ROMAN_24);
			}
			else if (compChoice == 1)
			{
				iSetColor(255, 0, 0);
				iText(100, 250, "Rock crushes Scissors", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(100, 200, "Computer Win", GLUT_BITMAP_TIMES_ROMAN_24);
			}
			else if (compChoice == 2)
			{
				iSetColor(255, 0, 0);
				iText(100, 250, "Scissors cuts Paper", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(100, 200, "You Win", GLUT_BITMAP_TIMES_ROMAN_24);
			}
		}
		else if (playerChoice == 4)
		{
			if (compChoice == 4)
			{
				iSetColor(255, 0, 0);
				iText(100, 250, "Tie!", GLUT_BITMAP_TIMES_ROMAN_24);
			}
			else if (compChoice == 5)
			{
				iSetColor(255, 0, 0);
				iText(100, 250, "Lizard poisons Spock", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(100, 200, "You Win", GLUT_BITMAP_TIMES_ROMAN_24);
			}
			else if (compChoice == 3)
			{
				iSetColor(255, 0, 0);
				iText(100, 250, "Scissors beheads Lizard", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(100, 200, "Computer Win", GLUT_BITMAP_TIMES_ROMAN_24);
			}
			else if (compChoice == 2)
			{
				iSetColor(255, 0, 0);
				iText(100, 250, "Lizard eats Paper", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(100, 200, "You Win", GLUT_BITMAP_TIMES_ROMAN_24);
			}
			else if (compChoice == 1)
			{
				iSetColor(255, 0, 0);
				iText(100, 250, "Rock crushes Lizard", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(100, 200, "Computer Win", GLUT_BITMAP_TIMES_ROMAN_24);
			}
		}
		else if (playerChoice == 5)
		{
			if (compChoice == 5)
			{
				iSetColor(255, 0, 0);
				iText(100, 250, "Tie!", GLUT_BITMAP_TIMES_ROMAN_24);
			}
			else if (compChoice == 4)
			{
				iSetColor(255, 0, 0);
				iText(100, 250, "Lizard poisons Spock", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(100, 200, "Computer Win", GLUT_BITMAP_TIMES_ROMAN_24);
			}
			else if (compChoice == 3)
			{
				iSetColor(255, 0, 0);
				iText(100, 250, "Spock distroys Scissors", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(100, 200, "You Win", GLUT_BITMAP_TIMES_ROMAN_24);
			}
			else if (compChoice == 1)
			{
				iSetColor(255, 0, 0);
				iText(100, 250, "Spock vaporizes Rock", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(100, 200, "You Win", GLUT_BITMAP_TIMES_ROMAN_24);
			}
			else if (compChoice == 2)
			{
				iSetColor(255, 0, 0);
				iText(100, 250, "Paprer disproves Spock", GLUT_BITMAP_TIMES_ROMAN_24);
				iText(100, 200, "Computer Win", GLUT_BITMAP_TIMES_ROMAN_24);
			}
		}
		iSetColor(24, 231, 248);
		iText(100, 120, "Press 's' to play again ...", GLUT_BITMAP_TIMES_ROMAN_24);
	}
}
void iKeyboard(unsigned char key)
{
	if (key == '1')
	{
		playerChoice = 1;
		//user chooses rock
	}
	else if (key == '2')
	{
		playerChoice = 2;
		//user chooses paper
	}
	else if (key == '3')
	{
		playerChoice = 3;
		//user chooses scissor
	}
	else if (key == '4')
	{
		playerChoice = 4;
		//user chooses lizard
	}
	else if (key == '5')
	{
		playerChoice = 5;
		//user chooses spock
	}

	if (key == 's')
	{
		playing++;
	}
}

void iSpecialKeyboard(unsigned char key) 
{

}

void iMouse(int button, int state, int mx, int my)
{

}

void iMouseMove(int mx, int my) 
{

}

int corand()
{
	int rc = rand() % 5 + 1;
	return rc;
}

void main()
{
	srand(time(NULL));
	compChoice = corand();

	iInitialize(screenWidth, screenHeight, "Welcome to Rock-Paper-Scissor-Lizard-Spock");
}