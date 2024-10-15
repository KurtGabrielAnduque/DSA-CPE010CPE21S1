#include <iostream>
using namespace std;

class Node {
public:
    Node* next;
    int data;
};


void insert(Node*& head, int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;

    if (!head) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next) {
        temp = temp->next;
    }
    temp->next = newNode;
}


void bubbleSort(Node*& head) {
    if (!head) return;

    bool swapped;
    Node* ptr1;
    Node* lptr = nullptr;

    do {
        swapped = false;
        ptr1 = head;

        while (ptr1->next != lptr) {
            if (ptr1->data > ptr1->next->data) {
                swap(ptr1->data, ptr1->next->data);
                swapped = true;
            }
            ptr1 = ptr1->next;
        }
        lptr = ptr1; 
    } while (swapped);
}

Node* MIDDLE(Node* start, Node* end) {
    Node* one_step = start;
    Node* two_step = start;

    while (two_step != end && two_step->next != end) {
        one_step = one_step->next;
        two_step = two_step->next->next;
    }
    return one_step;
}

Node* Binarysearch(Node*& head, int target) {
    Node* start = head;
    Node* end = nullptr;
    while (start != end) {
        Node* middle = MIDDLE(start, end);
        if (middle->data == target) {
            return middle;
        } else if (middle->data < target) {
            start = middle->next;
        } else {
            end = middle;
        }
    }
    return nullptr;
}

int main() {
    Node* head = nullptr;

    int numbers[] = {7, 14, 19, 3, 10, 16, 8, 2, 11, 1, 17, 15, 5, 13, 9, 6, 20, 4, 12, 18};
    for (int num : numbers) {
        insert(head, num);
    }

 
    bubbleSort(head);


    cout << "Sorted linked list: ";
    Node* temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

d

    int target;
    cout << "Enter the data to search inside the linked list: ";
    cin >> target;

    Node* result = Binarysearch(head, target);
    
    if (result) {
        cout << "The value " << target << " is found in the linked list." << endl;
    } else {
        cout << "The value " << target << " is not found in the linked list." << endl;
    }

    return 0;
}
