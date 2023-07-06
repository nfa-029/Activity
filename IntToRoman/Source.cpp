#include<iostream>
#include<string>
#include <unordered_map>
using namespace std;

void intToRoman(int n) {
	string romanInteger[13] = { "I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M" };
	int decimalInteger[13] = { 1,4,5,9,10,40,50,90,100,400,500,900,1000 };
	int iterate = 12, quotient = 0; //i for iteration and q for quotient that indicates the repetition of the symbol if necessary
	
		while (n > 0) {
		quotient = n / decimalInteger[iterate];	//going from largest to smallest possible divisor
		n = n % decimalInteger[iterate];	//remainder to be processed
			while (quotient--) {		//repetition count
				cout << romanInteger[iterate];		//prints the roman numeral
				}
		iterate--;		//iterating from right to left
		}
}

int main() {
	cout << "Enter integer\n";
	int input = 0;
	cin >> input;
	cout << "The roman integer for " << input << "is ";
	intToRoman(input);
	cout << endl;
	//system("pasue");
	return 0;
}

