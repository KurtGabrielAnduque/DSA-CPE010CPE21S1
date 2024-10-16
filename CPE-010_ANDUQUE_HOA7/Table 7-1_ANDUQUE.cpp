// Online C++ compiler to run C++ program online
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
const int max_size = 100;




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

   
    return 0;
}