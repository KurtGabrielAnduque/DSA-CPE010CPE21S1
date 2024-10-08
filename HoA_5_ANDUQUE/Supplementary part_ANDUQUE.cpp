#include <iostream>
#include <string>

using namespace std;


class Job {
public:
    int jobID; 
    string userName; 
    int numPages; 
    Job* next; 

    Job(int id, string user, int pages) {
        jobID = id;
        userName = user;
        numPages = pages;
        next = nullptr; 
    }
};


class Printer {
private:
    Job* front; 
    Job* rear;

public:

    Printer() {
        front = nullptr;
        rear = nullptr;
    }

    void addJob(int id, string user, int pages) {
        Job* newJob = new Job(id, user, pages); 

 
        if (rear == nullptr) {
            front = rear = newJob;
        } else {
            rear->next = newJob; 
            rear = newJob; 
        }

        cout << "Added Job ID: " << id << ", User: " << user << ", Pages: " << pages << endl;
    }


    void displayQueue() {
        if (front == nullptr) {
            cout << "No jobs to display." << endl;
            return;
        }

        Job* current = front;
        cout << "Currently in queue:\n";
        while (current != nullptr) {
            cout << current->userName << endl;
            current = current->next;
        }
    }


    void processJob() {
  
        if (front == nullptr) {
            cout << "No jobs to process." << endl;
            return;
        }


        cout << "Processing...\n";
        displayQueue();


        Job* jobToProcess = front;
        cout << "Processing Job ID: " << jobToProcess->jobID << ", User: " << jobToProcess->userName << ", Pages: " << jobToProcess->numPages << endl;


        front = front->next;

        if (front == nullptr) {
            rear = nullptr;
        }

        delete jobToProcess; 

  
        cout << "Job done!\n\n";
    }


    bool hasJobs() {
        return front != nullptr;
    }
};

int main() {
    Printer printer;


    printer.addJob(1, "Kurt", 5);
    printer.addJob(2, "Dale", 10);
    printer.addJob(3, "Hendricks", 2);
    

    while (printer.hasJobs()) {
        printer.processJob();
    }

    return 0;
}
