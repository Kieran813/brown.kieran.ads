#include <stdio.h>
#include <conio.h>

char grid[10] = {'0','1','2','3','4','5','6','7','8','9'};
int input1 = 0;
int input2 = 0;
int i = 1;
int player = 1;

void createBoard()
{
	system("cls");
	
	printf("Tic-Tac-Toe\n\n\n");
	
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
	scanf("%d", &input1);
	grid[input1] = 'X';
	player ++;
}

void player2()
{
	printf("Player 2 select a space.");  
	scanf("%d", &input2);
	grid[input2] = 'O';
	player --;
}

int win()
{
	/*player 1
	horizontal*/
	if(grid[1] == 'X' && grid[2] == 'X' && grid[3] == 'X')
	{
		printf("Player 1 has won.");
		return 0;
	}
	
	else if(grid[4] == 'X' && grid[5] == 'X' && grid[6] == 'X')
	{
		printf("Player 1 has won.");
		return 0;
	}
	
	else if(grid[7] == 'X' && grid[8] == 'X' && grid[9] == 'X')
	{
		printf("Player 1 has won.");
		return 0;
	}
	//diagonal
	else if(grid[1] == 'X' && grid[5] == 'X' && grid[9] == 'X')
	{
		printf("Player 1 has won.");
		return 0;
	}
	
	else if(grid[3] == 'X' && grid[5] == 'X' && grid[7] == 'X')
	{
		printf("Player 1 has won.");
		return 0;
	}
	//vertical
	else if(grid[1] == 'X' && grid[4] == 'X' && grid[7] == 'X')
	{
		printf("Player 1 has won.");
		return 0;
	}
	
	else if(grid[2] == 'X' && grid[5] == 'X' && grid[8] == 'X')
	{
		printf("Player 1 has won.");
		return 0;
	}
	
	else if(grid[3] == 'X' && grid[6] == 'X' && grid[9] == 'X')
	{
		printf("Player 1 has won.");
		return 0;
	}
	/*player 2
	horizontal*/
	else if(grid[1] == 'O' && grid[2] == 'O' && grid[3] == 'O')
	{
		printf("Player 2 has won.");
		return 0;
	}
	
	else if(grid[4] == 'O' && grid[5] == 'O' && grid[6] == 'O')
	{
		printf("Player 2 has won.");
		return 0;
	}
	
	else if(grid[7] == 'O' && grid[8] == 'O' && grid[9] == 'O')
	{
		printf("Player 2 has won.");
		return 0;
	}
	//diagonal
	else if(grid[1] == 'O' && grid[5] == 'O' && grid[9] == 'O')
	{
		printf("Player 2 has won.");
		return 0;
	}
	
	else if(grid[3] == 'O' && grid[5] == 'O' && grid[7] == 'O')
	{
		printf("Player 2 has won.");
		return 0;
	}
	//vertical
	else if(grid[1] == 'O' && grid[4] == 'O' && grid[7] == 'O')
	{
		printf("Player 2 has won.");
		return 0;
	}
	
	else if(grid[2] == 'O' && grid[5] == 'O' && grid[8] == 'O')
	{
		printf("Player 2 has won.");
		return 0;
	}
	
	else if(grid[3] == 'O' && grid[6] == 'O' && grid[9] == 'O')
	{
		printf("Player 2 has won.");
		return 0;
	}
	else if(grid[1] != '1' && grid[2] != '2' && grid[3] != '3' && 
			grid[4] != '4' && grid[5] != '5' && grid[6] != '6' && 
			grid[7] != '7' && grid[8] != '8' && grid[9] != '9')
	{
		printf("The game is a draw.");
		return 0;
	}
	else
	{
		return 1;
	}
}

int main()
{
	do
	{		
		createBoard();		
		
		if(player == 1)
		{
			player1();
		}		
		else
		{
			player2();
		}	
		
		i = win();
	}
	while(i == 1);
	
	createBoard();
	
	if(player == 1)
		player = 2;
	else if(player == 2)
		player = 1;
	
	printf("Player %d has won.\n", player);
	
	printf("Press any key to exit.");	
	getch();	
	
	return 0;
	
}



