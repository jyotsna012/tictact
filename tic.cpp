#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cstring>

using namespace std;

char board[3][3] = { 
	{'_', '_', '_'}, 
	{'_', '_', '_'},
	{'_', '_', '_' }
};
char player = 'X';
void Draw();
void Input();
void TogglePlayer();
char Win();

int main(){
	Draw();
	while (1)
	{
		Input();
		Draw();
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
		TogglePlayer();
	}
	return 0;
}

void Draw()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << board[i][j] << " ";
		}
		cout << endl;
	}
}
void Input()
{
	char a;
	char b:
	cout << "Press the number of the row: ";
	cin >> a;
	cout << "Press the number of the column: ";
	cin >> b;
	
	int x = (int)a;
	int y;
	if(b == 'a'){
	 int y == 1;
	} else if (b == 'b') {
	 int y == 2;
	} else if (b == 'c') {
	 int y == 3;
	}
	
	board[x-1][y-1] = player;
	
	/*if (a == 1)
		board[0][0] = player;
	else if (a == 2)
		board[0][1] = player;
	else if (a == 3)
		board[0][2] = player;
	else if (a == 4)
		board[1][0] = player;
	else if (a == 5)
		board[1][1] = player;
	else if (a == 6)
		board[1][2] = player;
	else if (a == 7)
		board[2][0] = player;
	else if (a == 8)
		board[2][1] = player;
	else if (a == 9)
		board[2][2] = player;*/
}
void TogglePlayer()
{
	if (player == 'X')
		player = 'O';
	else
		player = 'X';
}
char Win()
{
	//first player
	if (board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X')
		return 'X';
	if (board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X')
		return 'X';
	if (board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X')
		return 'X';

	if (board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X')
		return 'X';
	if (board[0][1] == 'X' && board[1][1] == 'X' && board[2][1] == 'X')
		return 'X';
	if (board[0][2] == 'X' && board[1][2] == 'X' && board[2][2] == 'X')
		return 'X';

	if (board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X')
		return 'X';
	if (board[2][0] == 'X' && board[1][1] == 'X' && board[0][2] == 'X')
		return 'X';

	//second player
	if (board[0][0] == 'O' && board[0][1] == 'O' && board[0][2] == 'O')
		return 'O';
	if (board[1][0] == 'O' && board[1][1] == 'O' && board[1][2] == 'O')
		return 'O';
	if (board[2][0] == 'O' && board[2][1] == 'O' && board[2][2] == 'O')
		return 'O';

	if (board[0][0] == 'O' && board[1][0] == 'O' && board[2][0] == 'O')
		return 'O';
	if (board[0][1] == 'O' && board[1][1] == 'O' && board[2][1] == 'O')
		return 'O';
	if (board[0][2] == 'O' && board[1][2] == 'O' && board[2][2] == 'O')
		return 'O';

	if (board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O')
		return 'O';
	if (board[2][0] == 'O' && board[1][1] == 'O' && board[0][2] == 'O')
		return 'O';

	return '/';
}



