#include <stdio.h>
//#include <conio.h>

char grid[10] = {'0','1','2','3','4','5','6','7','8','9'};  //Array for grid
int input = 0;  //Space the player chooses
int i = 9;  //While loop condition
int player = 1;  //Stores player for current turn

void createBoard()
{
	system("cls");  //Clears screen 
	
	printf("Tic-Tac-Toe\n\n\n");
	
	//Board shape
	printf("  %c  |  %c  |  %c \n", grid[1], grid[2], grid[3]);
	printf("_________________\n");
	printf("  %c  |  %c  |  %c \n", grid[4], grid[5], grid[6]);
	printf("_________________\n");
	printf("  %c  |  %c  |  %c \n", grid[7], grid[8], grid[9]);
	
	printf("\n\n\nPlayer 1 is X \nPlayer 2 is O\n\n\n");
}

void player1()
{		
	printf("Player 1 select a space.");  
	scanf("%d", &input);
	
	
	
	if(grid[input] == 'X' || grid[input] == 'O')  //Stops player from choosing a space that's already taken
	{		
		printf("Invalid move.");
	}
	else  //Sets grid value and sets the player for next turn
	{
		grid[input] = 'X';
		player ++;
	}		
}

void player2()
{
	printf("Player 2 select a space.");  
	scanf("%d", &input);
	if(grid[input] == 'O' || grid[input] == 'X')  //Stops player from chosing a space that's already taken
	{		
		printf("Invalid move.");
	}
	else  //Sets grid value and sets the player for next turn
	{
		grid[input] = 'O';
		player --;
	}
		
}

int win() //Returns 1 if player 1 wins, 2 if player 2 wins, 3 if it's a draw or 9 (default) if there are still moves to be played
{
	/*player 1
	horizontal*/
	if(grid[1] == 'X' && grid[2] == 'X' && grid[3] == 'X')
	{		
		return 1;
	}
	
	else if(grid[4] == 'X' && grid[5] == 'X' && grid[6] == 'X')
	{		
		return 1;
	}
	
	else if(grid[7] == 'X' && grid[8] == 'X' && grid[9] == 'X')
	{		
		return 1;
	}
	//diagonal
	else if(grid[1] == 'X' && grid[5] == 'X' && grid[9] == 'X')
	{
		return 1;
	}
	
	else if(grid[3] == 'X' && grid[5] == 'X' && grid[7] == 'X')
	{
		return 1;
	}
	//vertical
	else if(grid[1] == 'X' && grid[4] == 'X' && grid[7] == 'X')
	{
		return 1;
	}
	
	else if(grid[2] == 'X' && grid[5] == 'X' && grid[8] == 'X')
	{
		return 1;
	}
	
	else if(grid[3] == 'X' && grid[6] == 'X' && grid[9] == 'X')
	{
		return 1;
	}
	/*player 2
	horizontal*/
	else if(grid[1] == 'O' && grid[2] == 'O' && grid[3] == 'O')
	{		
		return 2;
	}
	
	else if(grid[4] == 'O' && grid[5] == 'O' && grid[6] == 'O')
	{
		return 2;
	}
	
	else if(grid[7] == 'O' && grid[8] == 'O' && grid[9] == 'O')
	{
		return 2;
	}
	//diagonal
	else if(grid[1] == 'O' && grid[5] == 'O' && grid[9] == 'O')
	{
		return 2;
	}
	
	else if(grid[3] == 'O' && grid[5] == 'O' && grid[7] == 'O')
	{
		return 2;
	}
	//vertical
	else if(grid[1] == 'O' && grid[4] == 'O' && grid[7] == 'O')
	{
		return 2;
	}
	
	else if(grid[2] == 'O' && grid[5] == 'O' && grid[8] == 'O')
	{
		return 2;
	}
	
	else if(grid[3] == 'O' && grid[6] == 'O' && grid[9] == 'O')
	{
		return 2;
	}
	else if(grid[1] != '1' && grid[2] != '2' && grid[3] != '3' && 
			grid[4] != '4' && grid[5] != '5' && grid[6] != '6' && 
			grid[7] != '7' && grid[8] != '8' && grid[9] != '9')
	{
		return 3;
	}
	else
	{
		return 9;
	}
}

int main()
{	
	do
	{		
		createBoard();	//Updates board state	
		
		if(player == 1)  //Decides who's turn it is
		{
			player1();
		}		
		else
		{
			player2();
		}	
		
		i = win(); //Breaks loop when win() function returns a different value
	}
	while(i == 9);
	
	createBoard(); //Shows final board state
	
	if(i != 3)  //Win/draw message based on what win() returns
		printf("Player %d has won.\n", i);
	else
		printf("The game is a draw.\n");		
	
	system("pause");
	return 0;
	
}



