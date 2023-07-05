#include<iostream>
#include<string>
using namespace std;

void intToRoman(int n) {
	string romanInteger[13] = { "I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M" };
	int decimalInteger[13] = { 1,4,5,9,10,40,50,90,100,400,500,900,1000 };
	int i = 12, q = 0; //i for iteration and q for quotient that indicates the repetition of the symbol if necessary
	
		while (n > 0) {
		q = n / decimalInteger[i];	//going from largest to smallest possible divisor
		n = n % decimalInteger[i];	//remainder to be processed
			while (q--) {		//repetition count
				cout << romanInteger[i];		//prints the roman numeral
				}
		i--;		//iterating from right to left
		}

		/*string rom="";
		for(int i=0; i<=12; ++i){
			while(n-decimalInteger[i]>=0){
				rom+=romanInteger[i];
				n-=decimalInteger[i];
			}
		}
	*/
}

int main() {
	cout << "Enter integer\n";
	int n = 0;
	cin >> n;
	cout << "The roman integer for " << n << "is ";
	intToRoman(n);
	cout << endl;
	//system("pasue");
	return 0;
}

