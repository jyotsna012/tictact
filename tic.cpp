#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cstring>

using namespace std;

void printBoard(char array[3][3]);
void resetBoard(char (&array)[3][3]);

int main(){

  char array[3][3] = {

    {'1','1','1'},
    {'_','_','1'},
    {'_','_','1'}
  
  };

 printBoard(array);
 resetBoard(array);

 
};

void resetBoard(char (&array)[3][3]){
 
  char array[3][3] = {

    {'_','_','_'},
    {'_','_','_'},
    {'_','_','_'}
  
  };
  
  void printBoard(char (&array)[3][3]);

}

void printBoard(char array[3][3]){

  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){

      cout << " " << array[i][j] << " ";
    }
    cout << endl;
  }

  return;
}
