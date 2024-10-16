// Online C++ compiler to run C++ program online
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
const int max_size = 100;


void BubbleSort(int dataset[max_size], int length){
  for (int outer = 0; outer< length; outer++){
    for(int inner = 0; inner<length; inner++){
      if(dataset[inner]> dataset[inner + 1]){
        int temp = dataset[inner];
        dataset[inner] = dataset[inner + 1];
        dataset[inner + 1] = temp;
      };
    };
  } 
};

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
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "SORTED VALUES"<< endl;
    
    BubbleSort(dataset,length);
   
   for (int counter = 0; counter < max_size; counter ++ ){
      cout <<  dataset[counter]<<" ";
    };
   
    return 0;
}