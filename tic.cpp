#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cstring>

using namespace std;

void printBoard(char array[3][3]);
void reset(char array[3][3]);

int main(){

  char array[3][3] = {

    {'_','_','_'},
    {'_','_','_'},
    {'_','_','_'}
  
  };
  
 reset(array);
 cout << "Welcome to Tic Tac Toe. Player one will be X, and Player 2 will by O" << endl;
 cout << "You will enter where to place your letter based on the following format" << endl;
 cout << "Row 1 = 1, Row 2 = 2, Row 3 = 3" << endl;
 cout << "Col 1 = a, Col 2 = b, Col 3 = c" << endl;
 cout << "Please enter which row you want to place your move (1,2,3)" << endl;
 char x = 0;
 char y = 0;
 cin >> x;
 cout << "Please enter which column you want to place your move (a,b,c)" << endl;
 cin >> y;
 array[x-1][y-1] = 'X';
 printBoard(array);
  
};

void reset(char array[3][3]){

  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
        array[i][j] = '_';
    }
  }
  
  printBoard(array);
   
  return;

}

void printBoard(char array[3][3]){

  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){

      cout << " " << array[i][j] << " ";
    }
    cout << endl;
  }
  
  cout << "-----------------------" << endl;


  return;
}
