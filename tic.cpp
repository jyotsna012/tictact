//Tic Tac Toe
//Jyotsna Tera
//November 2021

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cstring>

using namespace std;

//creates a char array to represent a tic tac toe board.
char board[3][3] = { 
	{'_', '_', '_'}, 
	{'_', '_', '_'},
	{'_', '_', '_' }
};

//keeps track of the number of moves played in a round
int counts = 0;
//keep track of how many rounds have been played
int scores = 1;
//kepps track of how many times x wins
int xScores = 0;
//keeps track of how many times o wins
int yScores = 0;
//keeps track of the ties.
int tScores = 0;
//creates a variable to represent the player. 
char player = 'X';

//functions
void printBoard();
void Input();
void TogglePlayer();
void resetBoard();
int count(int & c);
int score(int & s);
char checkWin();
int xScore(int & a);
int yScore(int & b);
int tScore(int & b);

//function to increase xScore
int xScore(int & a){
	a = a+1;
	return a;
}

//function to increase score
int score(int & s){
	s = s+1;
	return s;
}

//function to increase yScore
int yScore(int & b){
	b = b+1;
	return b;
}

//function to increase tScore
int tScore(int & s){
    s = s+1;
    return s;
}

int main(){
	//creates a while loop so the game can be played over and over
	while(1){
		//on the first round of every game, the player starts at X and counts is reset to zero.
		player = 'X';
		counts = 0;
		
		//asks the player if they want to play
		char choice;
		cout << "Would you like to play Tic Tac Toe. If yes enter y. If no enter n" << endl;
		cin >> choice;
	
		//if player wants to plat the following happenens
		if(choice == 'y'){
			//the round number is displayed
			cout << "this is your " << scores << " round" << endl;
			//the board is cleared
			resetBoard();
			//there is a while loop so until a win or tie occurs the players will have a chance to enter a keep entering moves
			while (1){
				//function that lets player enter a move and places marker on the board
				Input();
				//reprints the board with the new move
				printBoard();
				//if x wins, it will be displayed, the xScore will be increased, the loop will break
				if (checkWin() == 'X'){
					cout << "X wins!" << endl;
					xScore(xScores);
					break;
					}
				//if o wins, it will be displayed, the yScore will be increased, the loop will break
				else if (checkWin() == 'O'){
					cout << "O wins!" << endl;
					yScore(yScores);
					break;
				//if after 9 turns, there is no win, tie will be displayed, the tScore will be increased, the loop will break
				} else if (counts == 9 && checkWin() == 'n'){
					cout << "Tie!" << endl;
					tScore(tScores);
					break;
				}
				//each time the player switches
				TogglePlayer();
			}
			//the round number increases
			score(scores);
			//scores are displayed
			cout << "here are the scores: X: " << xScores << " & O: " << yScores << " & Tie: " << tScores << endl;
		//if player does not want to play again thank you will be displayed and while loop will break
		} else {
			cout << "thanks for playing!" << endl;
	  		return 0;
		}
	}
}

//function to increase count
int count(int & c){
	c = c + 1;
	return c;
} 

//prints board
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

//sets all spaces on baord to '_'
void resetBoard(){
	
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			board[i][j] = '_';
			cout << board[i][j] << " ";
		}
		cout << endl;
	}
}


//asks player for move and replaces '_' with move in the array
void Input()
{
	//records which row and column player wnats to place move
	int a;
	int b;
	cout << "Enter the number of the row you would like to place your marker: ";
	cin >> a;
	cout << "Enter the number of the column you would like to place your marker: ";
	cin >> b;
	
	//if board is empty at move, the player is placed, else error message is displayed and user can enter again 
	if (a == 1 && b == 1) {
		if (board[0][0] == '_') {
		board[0][0] = player;
		count(counts);
		} else {
		  TogglePlayer();
		  cout << "space already taken. enter new space" << endl;
		}
	}
	else if (a == 1 && b == 2){
		if (board[0][1] == '_') {
		board[0][1] = player;
		count(counts);
		} else {
		  TogglePlayer();
		  cout << "space already taken. enter new space" << endl;
		}
	}
	else if (a == 1 && b == 3){
		if (board[0][2] == '_') {
		board[0][2] = player;
		count(counts);
		} else {
		  TogglePlayer();
		  cout << "space already taken. enter new space" << endl;
		}
	}
	else if (a == 2 && b == 1){
		if (board[1][0] == '_') {
		board[1][0] = player;
		count(counts);
		} else {
		  TogglePlayer();
		  cout << "space already taken. enter new space" << endl;
		}
	}
	else if (a == 2 && b == 2){
		if (board[1][1] == '_') {
		board[1][1] = player;
		count(counts);
		} else {
		  TogglePlayer();
		  cout << "space already taken. enter new space" << endl;
		}
	}
	else if (a == 2 && b == 3){
		if (board[1][2] == '_') {
		board[1][2] = player;
		count(counts);
		} else {
		  TogglePlayer();
		  cout << "space already taken. enter new space" << endl;
		}
	}
	else if (a == 3 && b == 1){
		if (board[2][0] == '_') {
		board[2][0] = player;
		count(counts);
		} else {
		  TogglePlayer();
		  cout << "space already taken. enter new space" << endl;
		}
	}
	else if (a == 3 && b == 2){
		if (board[2][1] == '_') {
		board[2][1] = player;
		count(counts);
		} else {
		  TogglePlayer();
		  cout << "space already taken. enter new space" << endl;
		}
	}
	else if (a == 3 && b == 3){
		if (board[2][2] == '_') {
		board[2][2] = player;
		count(counts);
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

//the player is changed
void TogglePlayer()
{
	if (player == 'X')
		player = 'O';
	else
		player = 'X';
}

//checks to see if there is three in a row. return x, o, or n based on who wins
char checkWin()
{
	if (board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X'){
		return 'X';}
	if (board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X'){
		return 'X';}
	if (board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X'){
		return 'X';}
	if (board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X'){
		return 'X';}
	if (board[0][1] == 'X' && board[1][1] == 'X' && board[2][1] == 'X'){
		return 'X';}
	if (board[0][2] == 'X' && board[1][2] == 'X' && board[2][2] == 'X'){
		return 'X';}
	if (board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X'){
		return 'X';}
	if (board[2][0] == 'X' && board[1][1] == 'X' && board[0][2] == 'X'){
		return 'X';}
	if (board[0][0] == 'O' && board[0][1] == 'O' && board[0][2] == 'O'){
		return 'O';}
	if (board[1][0] == 'O' && board[1][1] == 'O' && board[1][2] == 'O'){
		return 'O';}
	if (board[2][0] == 'O' && board[2][1] == 'O' && board[2][2] == 'O'){
		return 'O';}
	if (board[0][0] == 'O' && board[1][0] == 'O' && board[2][0] == 'O'){
		return 'O';}
	if (board[0][1] == 'O' && board[1][1] == 'O' && board[2][1] == 'O'){
		return 'O';}
	if (board[0][2] == 'O' && board[1][2] == 'O' && board[2][2] == 'O'){
		return 'O';}
	if (board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O'){
		return 'O';}
	if (board[2][0] == 'O' && board[1][1] == 'O' && board[0][2] == 'O'){
		return 'O';}
	else{
		return 'n';}
}
