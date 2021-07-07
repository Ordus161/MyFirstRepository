#include <iostream>
#include <string>
using namespace std;


int main()
{
	string digit;
	cin >> digit;
	int i = stoi(digit) + 10;
	digit = to_string(i);

	std::cout << digit << std::endl;
}