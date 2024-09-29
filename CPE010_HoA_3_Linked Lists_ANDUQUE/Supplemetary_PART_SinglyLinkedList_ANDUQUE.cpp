#include <iostream>
#include <utility>
#include <string>
#include <thread>
#include <chrono>
using namespace std;

class Node{
  public:
  string songs;
  Node* next;
};


void InsertHEAD(Node*& head, string songs){
    Node* new_song = new Node();
    new_song -> songs = songs;
    new_song -> next = head;
    head = new_song;
    
};



void PlaySong(Node* head, int Song_counter){
    if (head == nullptr){
      cout << "PLAYLIST IS EMPTY";  
    };
    
    Node* current = head;
    int Counter = Song_counter;
    while(current != nullptr){
      cout << Counter<<". "<<current ->songs <<endl;
      Counter--;
      current = current ->next;
    };
    
};

void PlaySong1(Node* head){
    
    if (head == nullptr){
      cout << "PLAYLIST IS EMPTY";  
    };
    
    Node* current = head;
    while(current!=nullptr){
      cout <<"Playing song: "<< current ->songs<<endl;
      
      current = current->next;
      if (current!=nullptr){
          cout <<"next"<<endl;
          this_thread::sleep_for(chrono::seconds(2));
      };
  
      
      
    };
    cout<<"DONE PLAYING ALL SONGS"<<endl;
};

void DeleteSong(Node*& head, string songs){
   
    if (head == nullptr){
      cout << "PLAYLIST IS EMPTY";  
    };
    
    Node* current = head;
    Node* previous = nullptr;
    
    if (head->songs == songs) {
        Node* temp = head;
        head = head->next; 
        delete temp;
        return;
    }
    
    while(current != nullptr && current-> songs != songs){
        previous = current;
        current = current -> next;
        
    };
    
    previous -> next = current ->next;
    delete current;
};


int main(){
  Node* head = new Node();
  
  
  string song;
  string insert;
  string deletion;
  int Song_counter = 1;
  int choice;
  
  cout << "Enter your first song to insert: ";
  getline(cin,song);
  
  
  head -> songs = song;
  head -> next = nullptr;
  
  cout<<endl;
  cout<<endl;
  while (true){
      
      cout << "=================== SONG PLAYER ==================="<<endl;
      cout <<"[1] = play your playlist"<<endl;
      cout <<"[2] = insert a new song"<<endl;
      cout <<"[3] = delete a song in playlist"<<endl;
      cout <<"[4] = End the streaming"<<endl;
      cout<< "choice: ";
      cin>>choice;
      cout << "===================================================="<<endl;
      
      
      cout <<endl;
      cout <<endl;
      
      if (choice == 1){
          
          cout << "============= Playing Line up Pls Enjoy :> =============="<<endl;
          PlaySong1(head);
          cout << endl;
          cout << endl;
          cout << "========================================================="<<endl;
          cout <<endl;
          
          
          
      }else if (choice == 2){
          
          cout << "==================== SONG DOWNLOADER ===================="<<endl;
          cout<<endl;
          cout << "Enter the new song to download: ";
          cin.ignore();
          
          getline(cin,insert);
          Song_counter++;
        
          cout <<endl;
          InsertHEAD(head,insert);
          cout << "New playlist: "<<endl;
          PlaySong(head,Song_counter);
          cout << "========================================================="<<endl;
          
          cout<<endl;
          cout<<endl;
          
          
          
      }else if (choice == 3){
          
          cin.ignore();
          cout << "==================== SONG DELETION ===================="<<endl;
          
          cout <<endl;
          cout<< "Choose a song from playlist to delete"<<endl;
          
          PlaySong(head,Song_counter);
          
          cout<<endl;
          
          cout << "Enter the song to delete in playlist: ";
          getline(cin,deletion);
          Song_counter--;
     
          
          cout <<endl;
          cout <<endl;
          
          cout <<"Updated Playlist"<<endl;
          DeleteSong(head,deletion);
          PlaySong(head,Song_counter);
          cout<<endl;
          cout << "======================================================="<<endl;
          
      }else if (choice == 4){
        cout <<"=========================== ENDING STREAM =========================="<<endl;
        break;
      };
      
    
  };
    
    cout <<"=================== Thank you for listening!!!!! ==================="<<endl;
  
  return 0;  
};