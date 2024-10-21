#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
const int max_size = 100;


void quickSort(int arr[], int left, int right) {
    int i = left, j = right;
    int pivot = arr[(left + right) / 2];

    while (i <= j) {
        while (arr[i] < pivot) i++;
        while (arr[j] > pivot) j--;
        if (i <= j) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }

    if (left < j)
        quickSort(arr, left, j);
    if (i < right)
        quickSort(arr, i, right);
}

int main() {
    int dataset[max_size];
    srand(time(0));

    for (int i = 0; i < max_size; i++) {
        dataset[i] = rand() % 101;  
    }

    cout<<"UNSORTED VALUES"<<endl;
    for (int counter = 0; counter < max_size; counter++) {
        cout<<dataset[counter]<<" ";
    }
    cout << endl;

    cout << endl;
    cout << endl;
    cout << endl;
    cout << "================================================================================================================"<<endl;
    cout << endl;
    cout << endl;
    
    
    
    quickSort(dataset, 0, max_size - 1);

    cout<<"SORTED VALUES using quick sort"<<endl;
    for (int counter = 0; counter < max_size; counter++) {
        cout<<dataset[counter]<<" ";
    }
    cout<<endl;

    return 0;
}