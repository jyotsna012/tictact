#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cstring>

using namespace std;

/*void printBoard(char * array, int r, int c);
void reset(char array[3][3]);*/

void printPointer(char** arrPtrParam);

int main(){
  
  char** arrPtr = new char*[3];
  for(int i = 0; i < 3; i++){
    arrPtr[i] = new char[3]
    for(int j = 0; j < 3; j++){
      arrPtr[i][j] = '_';
    }
  }
  printPointer(arrPtr);
  
  /*char array[3][3] = {

    {'_','_','_'},
    {'_','_','_'},
    {'_','_','_'}

  };*/
  
  
  
 /*cout << "Welcome to Tic Tac Toe. Player one will be X, and Player 2 will by O" << endl;
 cout << "You will enter where to place your letter based on the following format" << endl;
 cout << "Row 1 = 1, Row 2 = 2, Row 3 = 3" << endl;
 cout << "Col 1 = a, Col 2 = b, Col 3 = c" << endl;
 cout << "Please enter which row you want to place your move (1,2,3)" << endl;
 char x = 0;
 char y = 0;
 cin >> x;
 cout << "Please enter which column you want to place your move (a,b,c)" << endl;
 cin >> y;
 array[x-1][y-1] = 'x';*/
 
  
};

void printPointer(char** arrPtrParam) {
for (int a = 0; a < 3; a++) {
	    for (int b = 0; b < 3; b++) {
	      arrPtrParam[a][b] += 100;
	      cout << arrPtrParam[a][b] << " ";
	   }
	    cout << endl;
	 }
}















/*void playX(char array[3][3]){  
 cout << "Please enter which row you want to place your move (1,2,3)" << endl;
 char x = 0;
 char y = 0;
 cin >> x;
 cout << "Please enter which column you want to place your move (a,b,c)" << endl;
 cin >> y;
 array[x-1][y-1] = 'x';
}

void playO(char array[3][3]){  
 cout << "Please enter which row you want to place your move (1,2,3)" << endl;
 char x = 0;
 char y = 0;
 cin >> x;
 cout << "Please enter which column you want to place your move (a,b,c)" << endl;
 cin >> y;
 array[x-1][y-1] = 'o';
}

void reset(char array[3][3]){
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
        array[i][j] = '_';
    }
  }
  //printBoard(array);
  return;
}

void printBoard(char * array, int r, int c){
  for(int i = 0; i < r; i++){
    for(int j = 0; j < c; j++){
      cout << *(array+i*c+i);
    }
    cout << endl;
  }
  cout << "-----------------------" << endl;
  return;
} */

