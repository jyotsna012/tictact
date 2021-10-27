#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cstring>

using namespace std;

void printBoard(char array[3][3]);
void reset(char array[3][3]);

int main(){

  char array[3][3] = {

    {'1','1','1'},
    {'_','_','1'},
    {'_','_','1'}
  
  };

 printBoard(array);
 reset(array);
 
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

  return;
}
