#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cstring>

using namespace std;

char array[3][3] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
char player = 'X';

void Draw()
{
	//system("cls");
	cout << "Tic Tac Toe v1.0" << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
}
void Input()
{
	int a;
	cout << "Press the number of the field: ";
	cin >> a;

	if (a == 1)
		array[0][0] = player;
	else if (a == 2)
		array[0][1] = player;
	else if (a == 3)
		array[0][2] = player;
	else if (a == 4)
		array[1][0] = player;
	else if (a == 5)
		array[1][1] = player;
	else if (a == 6)
		array[1][2] = player;
	else if (a == 7)
		array[2][0] = player;
	else if (a == 8)
		array[2][1] = player;
	else if (a == 9)
		array[2][2] = player;
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
	if (array[0][0] == 'X' && array[0][1] == 'X' && array[0][2] == 'X')
		return 'X';
	if (array[1][0] == 'X' && array[1][1] == 'X' && array[1][2] == 'X')
		return 'X';
	if (array[2][0] == 'X' && array[2][1] == 'X' && array[2][2] == 'X')
		return 'X';

	if (array[0][0] == 'X' && array[1][0] == 'X' && array[2][0] == 'X')
		return 'X';
	if (array[0][1] == 'X' && array[1][1] == 'X' && array[2][1] == 'X')
		return 'X';
	if (array[0][2] == 'X' && array[1][2] == 'X' && array[2][2] == 'X')
		return 'X';

	if (array[0][0] == 'X' && array[1][1] == 'X' && array[2][2] == 'X')
		return 'X';
	if (array[2][0] == 'X' && array[1][1] == 'X' && array[0][2] == 'X')
		return 'X';

	//second player
	if (array[0][0] == 'O' && array[0][1] == 'O' && array[0][2] == 'O')
		return 'O';
	if (array[1][0] == 'O' && array[1][1] == 'O' && array[1][2] == 'O')
		return 'O';
	if (array[2][0] == 'O' && array[2][1] == 'O' && array[2][2] == 'O')
		return 'O';

	if (array[0][0] == 'O' && array[1][0] == 'O' && array[2][0] == 'O')
		return 'O';
	if (array[0][1] == 'O' && array[1][1] == 'O' && array[2][1] == 'O')
		return 'O';
	if (array[0][2] == 'O' && array[1][2] == 'O' && array[2][2] == 'O')
		return 'O';

	if (array[0][0] == 'O' && array[1][1] == 'O' && array[2][2] == 'O')
		return 'O';
	if (array[2][0] == 'O' && array[1][1] == 'O' && array[0][2] == 'O')
		return 'O';

	return '/';
}
int main()
{
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
