// Online C++ compiler to run C++ program online
#include <iostream>
#include <stack>
using namespace std;

void Display(stack<char>operation){
  while(!operation.empty()){
      cout << operation.top();
      operation.pop();
  };
};


int main() {
    stack <char> operation;
    string operations = "((A+B]+[C-D]}";
    cout << "The size of the opeation is: "<<size(operations)<< endl;
    cout <<endl;
    
    for (int counter = 0; counter < size(operations) ;counter++){
        char character = operations[counter];
        if (character == '{' || character == '(' || character == '['){
            operation.push(character);
        }else if (character == '}'|| character == ')' || character == ']'){
            if(operation.empty()){
              cout << "the parenthesis is unbalance and the equation is invalid"<<endl;  
              return 0;
              
            }else if(
                (operation.top() == '(' && character == ')') ||
                (operation.top() == '{' && character == '}') ||
                (operation.top() == '[' && character == ']')
            ){
                operation.pop();
            };
            
        };
        
    };
    
    if(!operation.empty()){
        cout << "The operation is invalid and inbalance in parenthesis"<<endl;
        cout << "The operation has an extra: ";
        Display(operation);
    }else{
      cout << "The operation is balance in parenthesis"<<endl;  
    };
    
    
    return 0;
}