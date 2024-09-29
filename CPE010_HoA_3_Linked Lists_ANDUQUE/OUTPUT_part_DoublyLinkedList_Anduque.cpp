#include <iostream>
#include <string>
using namespace std;

class Node {
public:
    char data;
    Node* next;
    Node* prev; 
    
    Node(char value) : data(value), next(nullptr), prev(nullptr) {} 
};


void Display(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data;
        current = current->next;
    }
    cout << endl;
}


void INSERThead(Node*& head, char data) {
    Node* new_head = new Node(data);
    new_head->next = head; 
    if (head != nullptr) {
        head->prev = new_head;
    }
    head = new_head;
}


void InsertionANYpart(Node*& head, char data, int position) {
    Node* new_Node = new Node(data);
    
    if (position == 1) {
        INSERThead(head, data); 
        return;
    }
    
    Node* current = head;
    for (int counter = 1; counter < position - 1 && current != nullptr; counter++) {
        current = current->next;
    }

    if (current == nullptr) {
        cout << "Position entered is out of range" << endl;
        return;
    }

    new_Node->next = current->next;
    new_Node->prev = current;
    
    if (current->next != nullptr) {
        current->next->prev = new_Node;
    }
    
    current->next = new_Node;
}


void InsertionATlast(Node*& head, char data) {
    Node* last_Node = new Node(data);

    if (head == nullptr) {
        head = last_Node;
        return;
    }
    
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }

    temp->next = last_Node;
    last_Node->prev = temp;
}


void DeleteNode(Node*& head, char data) {
    Node* current = head;
    
    
    if (current != nullptr && current->data == data) {
        head = current->next;
        if (head != nullptr) {
            head->prev = nullptr;
        }
        delete current;
        return;
    }
    
    
    while (current != nullptr && current->data != data) {
        current = current->next;
    }

    if (current == nullptr) {
        cout << "Node with data " << data << " not found." << endl;
        return;
    }

  
    if (current->next != nullptr) {
        current->next->prev = current->prev;
    }
    if (current->prev != nullptr) {
        current->prev->next = current->next;
    }

    delete current;
}

int main() {
    Node* head = new Node('C');
    Node* second = new Node('P');
    Node* third = new Node('E');
    Node* fourth = new Node('0');
    Node* fifth = new Node('1');
    Node* last = new Node('0');

   
    head->next = second;
    second->prev = head;
    
    second->next = third;
    third->prev = second;
    
    third->next = fourth;
    fourth->prev = third;
    
    fourth->next = fifth;
    fifth->prev = fourth;
    
    fifth->next = last;
    last->prev = fifth;
    
    cout << "Traversal of Data" << endl;
    Display(head);

    cout << endl;

    cout << "Insertion at the Head" << endl;
    INSERThead(head, 'G');
    Display(head);
    cout << endl;

    cout << "Insertion at any part of the linked list" << endl;
    InsertionANYpart(head, 'E', 4);
    InsertionANYpart(head, 'C', 6);
    Display(head);
    cout << endl;

    cout << "Insert at last part" << endl;
    InsertionATlast(head, 'Y');
    Display(head);
    cout << endl;

    cout << "Delete A node" << endl;
    cout << "Delete Node C" << endl;
    DeleteNode(head, 'C');
    DeleteNode(head, 'C');
    cout << "Delete Node P" << endl;
    DeleteNode(head, 'P');
    cout << "Delete Node Y" << endl;
    DeleteNode(head, 'Y');
    InsertionATlast(head, '1');
    DeleteNode(head, '0');
    Display(head);

    return 0;
}
