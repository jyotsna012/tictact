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
void printBoard();
void Input();
void TogglePlayer();
char Win();
int count = 0;

int main(){
	printBoard();
	while (1)
	{
		Input();
		printBoard();
		if (Win() == 'X')
		{
			cout << "X wins!" << endl;
			break;
		}
		else if (Win() == 'O')
		{
			cout << "O wins!" << endl;
			break;
		} else if (count == 9 && Win() == 'n'){
			cout << "Tie!" << endl;
			return 0;
		}
		TogglePlayer();
	}
	return 0;
}

void printBoard()
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
	int a;
	int b;
	cout << "Enter the number of the row you would like to place your marker: ";
	cin >> a;
	cout << "Enter the number of the column you would like to place your marker: ";
	cin >> b;
	
	if (a == 1 && b == 1) {
		if (board[0][0] == '_') {
		board[0][0] = player;
		count = count + 1;
		} else {
		  TogglePlayer();
		  cout << "space already taken. enter new space" << endl;
		}
	}
	else if (a == 1 && b == 2){
		if (board[0][1] == '_') {
		board[0][1] = player;
		count = count + 1;
		} else {
		  TogglePlayer();
		  cout << "space already taken. enter new space" << endl;
		}
	}
	else if (a == 1 && b == 3){
		if (board[0][2] == '_') {
		board[0][2] = player;
		count = count + 1;
		} else {
		  TogglePlayer();
		  cout << "space already taken. enter new space" << endl;
		}
	}
	else if (a == 2 && b == 1){
		if (board[1][0] == '_') {
		board[1][0] = player;
		count = count + 1;
		} else {
		  TogglePlayer();
		  cout << "space already taken. enter new space" << endl;
		}
	}
	else if (a == 2 && b == 2){
		if (board[1][1] == '_') {
		board[1][1] = player;
		count = count + 1;
		} else {
		  TogglePlayer();
		  cout << "space already taken. enter new space" << endl;
		}
	}
	else if (a == 2 && b == 3){
		if (board[1][2] == '_') {
		board[1][2] = player;
		count = count + 1;
		} else {
		  TogglePlayer();
		  cout << "space already taken. enter new space" << endl;
		}
	}
	else if (a == 3 && b == 1){
		if (board[2][0] == '_') {
		board[2][0] = player;
		count = count + 1;
		} else {
		  TogglePlayer();
		  cout << "space already taken. enter new space" << endl;
		}
	}
	else if (a == 3 && b == 2){
		if (board[2][1] == '_') {
		board[2][1] = player;
		count = count + 1;
		} else {
		  TogglePlayer();
		  cout << "space already taken. enter new space" << endl;
		}
	}
	else if (a == 3 && b == 3){
		if (board[2][2] == '_') {
		board[2][2] = player;
		count = count + 1;
		} else {
		  TogglePlayer();
		  cout << "space already taken. enter new space" << endl;
		}
	}
	else{
		cout << "entry not valid. try again" << endl;
		TogglePlayer();
	}
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

	return 'n';
}



