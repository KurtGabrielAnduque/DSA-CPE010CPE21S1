#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
const int max_size = 100;

void insertionSort(int dataset[max_size], int length) {
  for (int step = 1; step < length; step++) {
    int key = dataset[step];
    int j = step - 1;


    while (j >=0 && key < dataset[j]) {
      dataset[j + 1] = dataset[j];
      --j;
    }
    dataset[j + 1] = key;
  }
}


int main() {
    int dataset[max_size];
    srand(time(0));
    for (int i = 0; i < max_size; i++){
      dataset[i] = rand() % 101;  
    };
    
    cout<< "UNSORTED VALUES"<<endl;
    cout << endl;
    for (int counter = 0; counter < max_size; counter ++ ){
      cout <<  dataset[counter]<<" ";
    };
    int length = 100;
    
    insertionSort(dataset,length);
    
    
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "SORTED VALUES"<<endl;
    for (int counter = 0; counter < max_size; counter ++ ){
      cout <<  dataset[counter]<<" ";
    };
    
    return 0;
}