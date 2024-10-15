#include <iostream>
using namespace std;


int recursiveBinarySearch(int arr[], int left, int right, int key) {
    
    if (left > right) {
        return -1; 
    }

    
    int mid = left + (right - left) / 2;


    if (arr[mid] == key) {
        return mid;
    }
    
    else if (arr[mid] < key) {
        return recursiveBinarySearch(arr, mid + 1, right, key); 
    }
    
    else {
        return recursiveBinarySearch(arr, left, mid - 1, key);
    }
}

int main() {
    int arr[] = {3, 5, 6, 8, 11, 12, 14, 15, 17, 18};
    int size = sizeof(arr) / sizeof(arr[0]); 
    int key = 8;
    
    int index = recursiveBinarySearch(arr, 0, size - 1, key);
    

    if (index != -1) {
        cout << "Element " << key << " found at index: " << index << endl;
    } else {
        cout << "Element " << key << " not found." << endl;
    }

    return 0;
}