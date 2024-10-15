#include <iostream>
#include <cstdlib> 
#include <time.h>
using namespace std;
const int max_size = 50;


int LinearSearch(int dataset[],int target){
    for (int counter = 0; counter < max_size; counter ++ ){
      if(dataset[counter] == target){
          return dataset[counter];
      }
    };
    return -1;
};


int main() {

    int dataset[max_size];
    srand(time(0));
    for (int i = 0; i < max_size; i++){
      dataset[i] = rand() % 101;  
    };
    int target;
    
    cout << "Think of number between 1 - 100 to search:  ";
    cin >> target;
    
    
    int result  = LinearSearch(dataset,target);
    
    
     if (result != -1) {
        cout << "The target " << result << " was found in the dataset." << endl;
    } else {
        cout << "Target not found in the dataset." << endl;
    }
    
    return 0;
}
