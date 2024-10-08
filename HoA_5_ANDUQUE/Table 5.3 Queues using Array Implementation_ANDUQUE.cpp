#include <iostream>
using namespace std;

class Queue {
private:
    int* arr;          
    int capacity;      
    int q_front;       
    int q_back;        
    int count;         
    int counter;

public:
    
    Queue(int size = 100) {
        arr = new int[size];
        capacity = size;
        q_front = 0;
        q_back = -1;
        count = 0;
    }

    
    ~Queue() {
        delete[] arr;
    }

    
    void Enqueue(int item) {
        if (count == capacity) {
            cout << "Queue overflow\n";
            return;
        }
        q_back = (q_back + 1) % capacity;
        arr[q_back] = item;
       
        count++;
    }

    
    void Dequeue() {
        if (Empty()) {
            cout << "Queue underflow\n";
            return;
        }
        q_front = (q_front + 1) % capacity;
        
        count--;
    }

    
    int Front() {
        if (Empty()) {
            cout << "Queue is empty\n";
            return -1;
        }
        return arr[q_front];
    }

    
    int Back() {
        if (Empty()) {
            cout << "Queue is empty\n";
            return -1;
        }
        return arr[q_back];
    }

    
    bool Empty() {
        return count == 0;
    }

    
    int Size() {
        return count;
    }

   
    void Clear() {
        q_front = 0;
        q_back = -1;
        count = 0;
    }
    
    void Display() {
    if (Empty()) {
        cout << "Queue is empty\n";
        return;
    }
    
    int i = q_front;
    for (int counter1 = 0; counter1 < count; counter1++) {
        cout << arr[i] << " ";
        i = (i + 1) % capacity;  
        }
    cout << endl;
    }

};

int main() {
    Queue q(5); 

    q.Enqueue(10);
    q.Enqueue(20);
    q.Enqueue(30);
    q.Enqueue(40);

    cout << "Front element is: " << q.Front() << endl;
    cout << "Back element is: " << q.Back() << endl;

    q.Dequeue();
    cout << "After dequeue, front element is: " << q.Front() << endl;

    cout << "Queue size is: " << q.Size() << endl;

    q.Clear();
    cout << "Queue cleared. Is it empty? " << (q.Empty() ? "Yes" : "No") << endl;
    
    cout << endl;
    cout <<endl;
    cout << " INSERTING THE QUEUE AGAIN"<<endl;
    q.Enqueue(10);
    q.Enqueue(20);
    q.Enqueue(30);
    q.Enqueue(40);
    
    cout << "Display queue: ";
    q.Display();
    return 0;
}