#include <iostream>
using namespace std;

int Change(int a, int b){
	int auxilliary = a;
	a = b;
	b = auxilliary;
	
	cout  << "First number: " << a << endl;
	cout << "Second number: " << b <<endl;
}

int main(int argc, char** argv) {
	int first_num;
	int second_num;
	
	
	cout << "Enter the first Number: ";
	cin >> first_num;
	cout << endl;
	
	cout << "Enter the second Number: ";
	cin >> second_num;
	cout << endl;
	
	cout << "=========== Before Changing ==========="<<endl;
	cout << "First Number: " << first_num<<endl;
	cout << "Second Number: " << second_num;
	cout <<endl;
	cout << endl;
	
	cout << "=========== After Changing ==========="<<endl;
	
	Change(first_num,second_num);
	
	
	return 0;
}
