// Online C++ compiler to run C++ program online
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
const int max_size = 100;



int main() {
    int dataset[max_size];
    srand(time(0));
    for (int i = 0; i < max_size; i++){
      dataset[i] = rand() % 5 + 1;  
    };
    
    
    for (int counter = 0; counter < max_size; counter ++ ){
      cout <<  dataset[counter]<<" ";
    };
    
    cout << endl;
    cout << endl;
    cout <<"           1-5 to vote in these candidates          "<<endl;
    cout <<"===================================================="<<endl;
    cout <<"|Candidate 1|  Bo Dalton Capistrano                |"<<endl;
    cout <<"|Candidate 2|  Cornelius Raymon Agustín            |"<<endl;
    cout <<"|Candidate 3|  Deja Jayla Bañaga                   |"<<endl;
    cout <<"|Candidate 4|  Lalla Brielle Yabut                 |"<<endl;
    cout <<"|Candidate 5|  Franklin Relano Castro              |"<<endl;
    cout <<"===================================================="<<endl;
    
    
    
    
    return 0;
}