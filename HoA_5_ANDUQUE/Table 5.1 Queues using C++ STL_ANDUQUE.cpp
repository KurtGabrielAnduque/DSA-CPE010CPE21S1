// Online C++ compiler to run C++ program online
#include <iostream>
#include <queue>
#include <string>
using namespace std;

void display (queue <string> names){
  while(!names.empty()){
    cout << names.front()<<endl;
    names.pop();
  };
};

int main() {
    
    queue <string> names;
    
    string student[5] = {"kurt","Dale","JP","Khent","Hendricks"};
    
    for (int counter = 0 ; counter< size(student); counter++){
      cout << "inserting: " <<  student[counter]  << " to queue.."<<endl;
      string name = student[counter];
      names.push(name);
    };
    cout << endl;
    cout << "The name under queue is"
    display(names);
    
    return 0;
}