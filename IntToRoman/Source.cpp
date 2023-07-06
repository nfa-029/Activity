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
    int len = 0, temp = num;
    while (temp != 0) {
        temp /= 10;
        len++;
    }
    temp = num;
    for (int i = len - 1; i >= 0; i--) {
        int div = pow(10, i);
        int req = temp / div;
        int val = req * div;
        if (mp[val] != "")romanInt += mp[val];
        else {
            if (div == 1 && req >= 5) {
                romanInt += mp[5];
                req -= 5;
            }
            if (div == 10 && req >= 5) {
                romanInt += mp[50];
                req -= 5;
            }
            if (div == 100 && req >= 5) {
                romanInt += mp[500];
                req -= 5;
            }
            while (req--)romanInt += mp[div];
        }
        temp = temp - val;
    }

    return romanInt;
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

