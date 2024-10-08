// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;

class Node{
  public:
      Node* next;
      string datas;
};

void display(Node* head){
    Node* current = head;
  while(current != nullptr){
      cout << current -> datas <<endl;
      current = current -> next;
  };  
};




void insert_at_last(Node*& head,string data){
    Node* last = new Node();
    last -> datas = data;
    last -> next = NULL;
    
    Node* current = head;
    while(current->next != nullptr){
      current = current -> next;  
    };
    
    current -> next = last;
};

void delete_at_head(Node*& head){
    Node* first = head;
    head = head -> next;
    delete first;
    
};




int main() {
    Node* head = new Node();
    
    string data;
    string insert;
    int name_counter = 1;
    int choice;
    
    cout << "Enter the first name to insert in the queue: ";
    getline(cin,data);
    head -> datas = data;
    head -> next = NULL;
    
    cout << endl;
    cout << endl;
    
    
    
    while(true){
        cout << "==================== QUEUE NAMES ==================="<<endl;
        cout <<"[1] = insert element indside the queue"<<endl;
        cout <<"[2] = delete element inside the queue"<<endl;
        cout <<"[3] = Check all the datas inside the queue"<<endl;
        cout<< "choice: ";
        cin>>choice;
        cout << "===================================================="<<endl;
        
        cout <<endl;
        cout <<endl;
        
        
        
        if(choice == 1){
            cin.ignore();
            cout << "Enter the name to be inserted inside the queue: ";
            getline(cin,insert);
            insert_at_last(head,insert);
            cout << "Updated elements inside the queue"<<endl;
            cout <<endl;
            cout <<endl;
            display(head);
        }else if (choice == 2){
            delete_at_head(head);
            cout << "Updated elements inside the queue"<<endl;
            cout <<endl;
            cout <<endl;
            display(head);
            
        }else if(choice == 3){
            cout <<endl;
            cout <<endl;
             display(head);
        }else{
            cout << "You enter a wrong value!!!";
            
        };
        
       
        
    };
    
   
   
   

    return 0;
}