#include <iostream>
using namespace std;
char charGrid[3][3] = { '-', '-', '-', '-', '-', '-', '-', '-', '-' };
char charPlayer = 'X';
int iRound = 0;

void drawBoard()
{
	system("cls");
	cout << "  Mahraf Ahmed - Tic-Tac-Toe" << endl;
	cout << "  **************************" << endl;
	cout << endl;
	//	

	cout << "     1   2   3  " << endl;
	cout << "   +---+---+---+" << endl;

	/*
		Nesting Loop - Here I showed that 'j' is after 'i'.
		[i][j] makes it so that 'i' is the X axis and 'j' is the Y Axis.

		If 'j' was first:
			1 2 3
			4 5 6
			7 8 9

		If 'i' was first:
			1 4 7
			2 5 8
			3 6 9
	*/

	for (int j = 0; j < 3; j++)
	{
		cout << " " << j + 1 << " ";

		for (int i = 0; i < 3; i++)
		{
			cout << "| " << charGrid[i][j] << " ";
		}
		cout << "| " << endl;
		cout << "   +---+---+---+" << endl;

		/*
				This is the finished drawing of the 3x3 Grid:

					  1   2   3
					+---+---+---+
				  1 | - | - | - |
					+---+---+---+
				  2 | - | - | - |
					+---+---+---+
				  3	| - | - | - |
					+---+---+---+

				The '-' characters will be replaced during each round. It will be replaced by either an 'X' or 'O'.
		*/
	}
}

void tryAgain()
{
	system("cls");
	drawBoard();
	cout << "ERROR! Try again!" << endl;
}

void boardInput()
{
	int a, b;
	cout << "Select Row: ";
	cin >> a;
	cout << "Select Column: ";
	cin >> b;

	if (charGrid[a - 1][b - 1] == '-')
	{
		charGrid[a - 1][b - 1] = charPlayer;
	}

	else
	{
		tryAgain();
		boardInput();
	}

	drawBoard();
}
void changePlayer()
{
	if (charPlayer == 'X')
		charPlayer = 'O';
	else
		charPlayer = 'X';
}

char Win()
{

	///		PLAYER ONE IF STATEMENTS

	/*
		These are the results if there is a vertical match.

		1|2|3
		4|5|6
		7|8|9
	*/

	if (charGrid[0][0] == 'X' && charGrid[0][1] == 'X' & charGrid[0][2] == 'X')
		return 'X';
	if (charGrid[1][0] == 'X' && charGrid[1][1] == 'X' & charGrid[1][2] == 'X')
		return 'X';
	if (charGrid[2][0] == 'X' && charGrid[2][1] == 'X' & charGrid[2][2] == 'X')
		return 'X';

	/*
		These are the results if there is a horizontal match.

		1 2 3
		-----
		4 5 6
		-----
		7 8 9
	*/

	if (charGrid[0][0] == 'X' && charGrid[1][0] == 'X' & charGrid[2][0] == 'X')
		return 'X';
	if (charGrid[0][1] == 'X' && charGrid[1][1] == 'X' & charGrid[2][1] == 'X')
		return 'X';
	if (charGrid[0][2] == 'X' && charGrid[1][2] == 'X' & charGrid[2][2] == 'X')
		return 'X';

	/*
		These are the results if there is a diagonal match.

		X - X
		- X -
		X - X
	*/

	if (charGrid[0][0] == 'X' && charGrid[1][1] == 'X' & charGrid[2][2] == 'X')
		return 'X';
	if (charGrid[2][0] == 'X' && charGrid[1][1] == 'X' & charGrid[0][2] == 'X')
		return 'X';

	///		PLAYER TWO IF STATEMENTS

	/*
		These are the results if there is a vertical match.

		1|2|3
		4|5|6
		7|8|9
	*/

	if (charGrid[0][0] == 'O' && charGrid[0][1] == 'O' & charGrid[0][2] == 'O')
		return 'O';
	if (charGrid[1][0] == 'O' && charGrid[1][1] == 'O' & charGrid[1][2] == 'O')
		return 'O';
	if (charGrid[2][0] == 'O' && charGrid[2][1] == 'O' & charGrid[2][2] == 'O')
		return 'O';

	/*
		These are the results if there is a horizontal match.

		1 2 3
		-----
		4 5 6
		-----
		7 8 9
	*/

	if (charGrid[0][0] == 'O' && charGrid[1][0] == 'O' & charGrid[2][0] == 'O')
		return 'O';
	if (charGrid[0][1] == 'O' && charGrid[1][1] == 'O' & charGrid[2][1] == 'O')
		return 'O';
	if (charGrid[0][2] == 'O' && charGrid[1][2] == 'O' & charGrid[2][2] == 'O')
		return 'O';

	/*
		These are the results if there is a diagonal match.

		X - X
		- X -
		X - X
	*/

	if (charGrid[0][0] == 'O' && charGrid[1][1] == 'O' & charGrid[2][2] == 'O')
		return 'O';
	if (charGrid[2][0] == 'O' && charGrid[1][1] == 'O' & charGrid[0][2] == 'O')
		return 'O';

	/*
		The value is returned as neutral, due to no matches.

		X X O
		O O X
		X O X

	*/

	return '/';
}

int main()
{
	drawBoard();
	while (1)
	{
		iRound++;
		cout << "Round: " << iRound << endl;
		boardInput();
		drawBoard();
		changePlayer();

		if (Win() == 'X')
		{
			cout << "X wins!" << endl;
			break;
		}
		else if (Win() == 'O')
		{
			cout << "O wins!" << endl;
			break;
		}
		else if (Win() == '/' & iRound == 9)
		{
			cout << "This match is a Draw!" << endl;
			break;
		}
		
	}
	system("pause");
	return 0;
}