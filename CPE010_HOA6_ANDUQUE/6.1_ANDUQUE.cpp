#include <iostream>
#include <cstdlib> 
#include <time.h>
using namespace std;
const int max_size = 50;

int main() {

    int dataset[max_size];
    srand(time(0));
    for (int i = 0; i < max_size; i++){
      dataset[i] = rand() % 101;  
    };
    
    for (int counter = 0; counter < max_size; counter ++ ){
      cout <<  dataset[counter]<<" ";
    };
    
    return 0;
}
