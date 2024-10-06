#include <iostream>
using namespace std;
const size_t maxCap = 100;
int stack[maxCap];
int top = 0, i, newData;



bool isEmpty(){
  if (top == 0){
      return true;
  }else{
      return false;
  };
};


void pop(){
    if(isEmpty()){
      cout << "Stack is underflow"<<endl;  
      return;
    };
    
    cout << "popping: "<< stack[top-1];
    top--;
    
}
   
void push(){
  if(top == i){
      cout << "Stack Overflow"<<endl;
      return;
  }  
  
  cout <<"New Value: ";
  cin >> newData;
  stack[top++] = newData;
};

void Top() {
    if (isEmpty()) {
        cout << "Stack underflow" << endl;
        return;
    }
    cout << "The element at the top of the stack is " << stack[top - 1] << endl;
}


void Print(){
    
    if(isEmpty()){
      cout<<"Stack underflow"<<endl;  
    };
    
    for(int counter = -1; counter < top ;counter--){
        cout << stack[top + counter]<<endl;
        if(top+counter== 0){
            break;
        };
    }
};



int main(){
    int choice;
    cout << "Enter the number of max elements for new stack: ";
    cin >> i;
    
    while(true){
        cout << "Stack Operations: "<<endl;
        cout << "[1] = PUSH"<<endl;
        cout << "[2] = POP"<<endl;
        cout << "[3] = TOP" <<endl;
        cout << "[4] = isEmpty" <<endl;
        cout << "[5] = Print all inside the stack"<<endl;
        cout << "Enter choice: ";
        cin >> choice;
        
        switch (choice){
            case 1: push();
                    break;
                    
            case 2: pop();
                    break;
                    
            case 3: Top();
                    break;
                    
            case 4: cout << isEmpty() <<endl;
                    break;
            
            case 5: Print();
                    break;
            default: cout << "Invalid Choice"<<endl;
        }
    }
    
    return 0;    
}
