#include <iostream>
using namespace std;

int Comparison(int arr[], int size, int key) {
    int comparisons = 0; 
    for (int i = 0; i < size; i++) {
        comparisons++;
        if (arr[i] == key) {
            return comparisons;
        }
    }
    return comparisons;
}

int sequentialSearchArray(int arr[], int size, int key) {
 
    for (int i = 0; i < size; i++) {
        
        if (arr[i] == key) {
            cout<< "The number"<< arr[i] <<" is at index: "<< i << endl;
        }
    }
    
};

int main() {
    int arr[] = {15, 18, 2, 19, 18, 0, 8, 14, 19, 14};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 18;
    
    sequentialSearchArray(arr,size,key);
    
    int comparisons = Comparison(arr, size, key);
    cout << "Number of comparisons in array: " << comparisons << endl;

    return 0;
}