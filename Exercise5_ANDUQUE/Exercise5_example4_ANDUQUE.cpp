// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <string.h>

class Node{
    public:
        string value;
        Node* next;
};






int main() {
    Node* head;
    Node* one = NULL;
    Node* two = NULL;
    Node* three = NULL;
    Node* four = NULL;
    
    
    one = new Node();
    two = new Node();
    three = new Node();
    four = new Node();
    
    one -> value = "kurt anduque";
    two -> value = "hendricks bautista";
    three -> value = "dale patena";
    four -> value = "kb";
    
    
    one -> next = two;
    two -> next = three;
    three -> next = four;
    four -> next = NULL;
    
    head = one;
    while (head != NULL){
        cout << head-> value<<endl;
        head = head-> next;
        
        
    }
    
    
    
    return 0;
}