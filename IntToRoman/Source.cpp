#include<iostream>
#include<string>
#include <map>
using namespace std;

string intToRoman(int num) {
    string romanInt = "";
	map<int, string> mp{
			{1,"I"},
			{4,"IV"},
			{5,"V"},
			{9,"IX"},
			{10,"X"},
			{40,"XL"},
			{50,"L"},
			{90,"XC"},
			{100,"C"},
			{400,"CD"},
			{500,"D"},
			{900,"CM"},
			{1000,"M"},
		};
	 for (auto iter = mp.rbegin(); iter != mp.rend(); iter++) {  //lambda function
		while (num >= iter->first)
		{
			num -= iter->first;
			romanInt += iter->second;
		}
	}
	return romanInt;
}


int main() {
	cout << "Enter integer\n";
	int input = 0;
	cin >> input;
	cout << "The roman integer for " << input << "is ";
	string output=intToRoman(input);
	cout << output<<endl;
	//system("pasue");
	return 0;
}

