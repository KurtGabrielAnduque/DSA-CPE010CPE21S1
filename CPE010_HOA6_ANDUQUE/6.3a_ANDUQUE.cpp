#include <iostream>
using namespace std;


void BubbleSort(int arr[],int length){
    for (int counter= 0; counter<length - 1; counter++){
        for(int inner = 0; inner<length- counter - 1 ;inner++ ){
            if (arr[inner]>arr[inner + 1]){
                int temp = arr[inner];
                arr[inner] = arr[inner + 1];
                arr[inner + 1] = temp;
            };
        };       
    };
};

int BinarySearch(int arr[], int length, int target) {
    int left = 0;
    int right = length - 1;
    
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == target) {
            return mid;
        
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
  return -1;
};


int main() {

    int arr[20] = {7, 14, 19, 3, 10, 16, 8, 2, 11, 1, 17, 15, 5, 13, 9, 6, 20, 4, 12, 18};
    int length = 20;
    
    BubbleSort(arr,length);
    
    for(int counter1 = 0;counter1<length ;counter1++){
      cout << arr[counter1]<<" ";  
    };
    cout << endl;
    int target;
    cout << "Enter the number to search inside the array: ";
    cin >> target;
    
    int result = BinarySearch(arr, length,target);
    
     if (result != -1) {
        cout << "Number found at index: " << result << endl;
    } else {
        cout << "Number not found in the array." << endl;
    }

    return 0;
}