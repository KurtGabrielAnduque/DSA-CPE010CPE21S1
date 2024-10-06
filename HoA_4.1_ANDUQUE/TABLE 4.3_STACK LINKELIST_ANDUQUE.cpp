#include<iostream>
using namespace std;
class Node { 
public:
    int data; 
    Node *next;
};

Node *head = NULL, *tail = NULL; 


void push(int newData) {
    Node *newNode = new Node; 
    newNode->data = newData; 
    newNode->next = head;
    if (head == NULL) {
        head = tail = newNode;
    } else {
        newNode->next = head; 
        head = newNode;
    }
}

int pop() {
    int tempVal;
    Node *temp;
    if (head == NULL) {
        std::cout << "Stack Underflow." << std::endl; 
        return -1;
    } else {
        temp = head;
        tempVal = temp->data; 
        head = head->next; 
        delete(temp);
        return tempVal;
    }
}


void Top() {
    if (head == NULL) {
        cout << "Stack is Empty." <<endl; 
        return;
    } else {
        cout << "Top of Stack: " << head->data <<endl;
    }
}


void displayStack() {
    if (head == NULL) {
        cout << "Stack is Empty." << endl;
        return;
    }
    
    Node *current = head;
    cout << "Stack elements: ";
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }
    cout <<endl;
}

int main() {
    push(1);
    cout << "After the first PUSH, top of stack is: "; 
    Top();
    push(5);
    cout << "After the second PUSH, top of stack is: "; 
    Top();
    
    
    cout << "Current stack elements: ";
    displayStack();
    
    pop();
    cout << "After the first POP operation, top of stack is: "; 
    Top();
    pop();
    cout << "After the second POP operation, top of stack: "; 
    Top();
    cout << endl;
    cout << endl;
    cout << endl;
    cout<<"==================== AFTER MODIFICATION ===================="<<endl;
    
    std::cout << "Current stack elements: ";
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(6);
    Top();
    pop();
    Top();
    displayStack();
    
    
    pop();
    
    return 0;
}