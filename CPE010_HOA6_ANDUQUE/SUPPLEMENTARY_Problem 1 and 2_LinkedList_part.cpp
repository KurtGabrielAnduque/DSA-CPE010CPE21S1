#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

void insert(Node*& head, int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = head; 
    head = newNode; 
}


void sequentialSearchLinkedList(Node* head, int key) {
    int comparisons = 0; 
    Node* temp = head;
    bool found = false; 

    while (temp != nullptr) {
        comparisons++; 
        if (temp->data == key) {
            found = true; 
            cout << "The number " << key << " is at index: " << comparisons - 1 << endl;
        }
        temp = temp->next;
    }
    
    if (!found) {
        cout << "The number " << key << " is not found in the linked list." << endl;
    }
    cout << "Number of comparisons in linked list: " << comparisons << endl;
}

int main() {
    Node* head = nullptr;
    int arr[] = {15, 18, 2, 19, 18, 0, 8, 14, 19, 14};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 18;


    for (int i = size - 1; i >= 0; i--) {
        insert(head, arr[i]);
    }


    sequentialSearchLinkedList(head, key);

    return 0;
}