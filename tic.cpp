#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cstring>

using namespace std;

void printBoard(char array[3][3]);

int main(){

  char array[3][3] = {

    {'_','_','_'},
    {'_','_','_'},
    {'_','_','_'}
  
  };

 array[0][1] = 'a';
 
 char a = array[0][1];

 cout << a << endl;
 printBoard(array);
 
};

void printBoard(char array[3][3]){

  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){

      cout << " " << array[i][j] << " ";
    }
    cout << endl;
  }

  return;
}
