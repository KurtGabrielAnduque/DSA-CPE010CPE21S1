
#include <iostream>
#include <stack>
using namespace std;


void display(stack<string>pl){
    while(!pl.empty()){
        cout<<pl.top()<<endl;
        pl.pop();
        
    };
};


int main() {
    stack <string> pl;
    pl.push("c++");
    pl.push("Java");
    pl.push("Python");
    cout<<"Initial Stack: "<<endl;
    display(pl);
    pl.pop();
    pl.pop();
    cout << endl;
    cout << "final Stack: ";
    display(pl);
    return 0;
}