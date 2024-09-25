
#include <iostream>
#include <queue>
using namespace std;


void display(queue<string>pl){
    while(!pl.empty()){
        cout<<pl.front()<<endl;
        pl.pop();
        
    };
};


int main() {
    queue <string> pl;
    pl.push("c++");
    pl.push("Java");
    pl.push("Python");
    cout<<"Initial Queue: "<<endl;
    display(pl);
    pl.pop();
    pl.pop();
    cout << endl;
    cout << "final Queue: ";
    display(pl);
    return 0;
}