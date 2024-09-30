#include <iostream>
#include <string>
using namespace std;



int main() {
    string names;
    
    ///Maam pag nag hahanap po kasi ng array size lang po yung sintax na ginagamit
    // kaya di ko po sure kung nasagot ko po yung tanong kasi size ng array lang po hinahanap 
    int ARRAY[5] = {5,4,3,2,1};
    cout <<"There are: " <<size(ARRAY) <<" elements in array"<< endl;
   
  
    

    cout << endl;
    cout << endl;
   
    
    
    cout << endl;
    
    
    /// dito po gumawa ako ng array na may user input tas iprint po yung size ng array at the same time
    
    //create a new array variable
    string ARRAY2[5];
    cout << "Creating a second array that can store string elements and find size"<<endl;
    
    //for loop for user input it works until every elements have data
    for (int counter = 0; counter<size(ARRAY2);counter++){
        cout << "Enter the name to insert array [" << counter + 1 << "]"<< ": ";
        
        getline(cin,names);
        ARRAY2[counter] = names;
    }
   
   
   cout <<endl;
   //for loop inorder to print all the names of elements inside the array using index
   for(int counter2 = 0; counter2<size(ARRAY2); counter2++){
       cout <<"["<<counter2 + 1 <<"] : " << ARRAY2[counter2] <<endl;
   };
   
   //print the size of the array
   cout << "There are "<<size(ARRAY2)<<" elements in this array :> "<<endl;
    
    return 0;
}