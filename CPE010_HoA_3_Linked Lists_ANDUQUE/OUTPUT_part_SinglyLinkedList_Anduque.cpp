
#include <iostream>
#include<utility>
#include <string>
using namespace std;

class Node{
    public:
    char data;
    Node* next;
    
    
};

void Display(Node* head){
    Node* current = head;
    while(current != nullptr){
      cout << current ->data;
      current = current -> next;
    };
    
};

void INSERThead(Node*& head, char data){
    Node* new_head = new Node();
    new_head -> data = data;
    new_head -> next = head; 
    head = new_head;
    
};


void InsertionANYpart(Node*& head, char data, int position){
    Node* new_Node = new Node();
    new_Node -> data = data;
    
    Node* current = head;
    for (int counter = 1 ; counter < position -1 && current != nullptr;counter++){
        current = current -> next;
    };
        if (current ==  nullptr){
          cout << "position entered is out of ranged"<< endl;
          return;
        };
        
        new_Node->next = current->next;
        current->next = new_Node;
        
        
};

void InsertionATlast(Node*& head, char data){
    Node* last_Node = new Node();
    last_Node -> data = data;
    last_Node -> next = NULL;
    
   
    
    Node* temp = head;
    while(temp->next!= nullptr){
      temp = temp -> next;  
    };
    temp -> next = last_Node;
    
}


int CounterNode(Node* head){
    Node* current = head;
    int counter = 1;
    
    while(current != nullptr){
      counter++;
      current = current->next;
    };
    return counter;
};

void DeleteNode(Node*& head, char data) {
   
    Node* current = head;
    Node* previous = nullptr;
    while (current != nullptr && current->data != data) {
        previous = current;
        current = current->next;
    }

    previous->next = current->next;
    delete current;
}



int main() {
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();
    Node* fourth = new Node();
    Node* fifth = new Node();
    Node * last = new Node();
    
    
    
    head -> data = 'C';
    second -> data = 'P';
    third -> data = 'E';
    fourth -> data = '0';
    fifth -> data = '1';
    last -> data = '0';
    
    head -> next = second;
    second -> next =third;
    third -> next = fourth;
    fourth -> next = fifth;
    fifth -> next = last; 
    last -> next = NULL;
    
    
    cout << "Traversal of Data"<< endl;
    Display(head);

    
    cout << endl;
    cout << endl;
    
    cout << "Insertion at the Head"<<endl;
    INSERThead(head,'G');
    Display(head);
    cout << endl;
    cout << endl;
    
    cout << "Insertion at any part of the linked list"<<endl;
    InsertionANYpart(head,'E',4);
    InsertionANYpart(head,'C',6);
    Display(head);
    
    cout<<endl;
    cout <<endl;
    
    cout << "Insert at last part"<<endl;
    InsertionATlast(head,'Y');
    Display(head);
    
    
    cout << endl;
    cout << endl;
    
    cout << "Delete A node"<< endl;
    cout << "Delete Node C"<<endl;
    DeleteNode(head,'C');
    DeleteNode(head,'C');
    cout <<"Delete Node P"<<endl;
    DeleteNode(head,'P');
    
    cout<<"Delete Node Y"<<endl;
    DeleteNode(head,'Y');
    InsertionATlast(head,'1');
    DeleteNode(head,'0');
    cout<<endl;
    cout<<"Final OUTPUT"<<endl;
    Display(head);
    
    return 0;
};