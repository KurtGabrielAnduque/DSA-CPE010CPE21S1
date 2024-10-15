#include <iostream>
using namespace std;

class Node {
public:
    Node* next;
    char data;
};

void LinearSearch(Node*& head, char target) {
    Node* temp = head;
    while (temp != nullptr) {
        if (temp->data == target) {
            cout << "Letter '" << temp->data << "' is inside the linked list." << endl;
            return; // Exit the function if the target is found
        }
        temp = temp->next;
    }
    cout << "Letter '" << target << "' is not found in the linked list." << endl; 
}

int main() {
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();
    Node* fourth = new Node();

    head->data = 'K';
    second->data = 'U';
    third->data = 'R';
    fourth->data = 'T';

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = nullptr; // Last node points to NULL

    char target;
    cout << "Enter a letter to check if it's inside the linked list: ";
    cin >> target;

    LinearSearch(head, target);

    return 0;
}
