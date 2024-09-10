#include <iostream>
using namespace std;

int Calc_Fahrenheit(int kelvin){
	float fahrenheit = (kelvin - 273.15)*(9.0/5.0)+32;
	cout << kelvin << "K" << " = " << fahrenheit << "F" << endl;
}

int main(int argc, char** argv) {
	
	int kelvin;
	cout << "Enter the temperature in kelvin to Convert to Fahrenheit: ";
	cin >> kelvin;
	cout << endl;
	
	Calc_Fahrenheit(kelvin);
	
	return 0;
}
