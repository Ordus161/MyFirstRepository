#include <iostream>
#include <string>
using namespace std;


int main()
{
	string digit;
	cin >> digit;
	int result = stoi(digit);
	try
	{
		int result = stoi(digit);
		cout << result * 10 << endl;
	}
	catch (invalid_argument exp)
	{
		cout << "invalid_argument :" << exp.what() << endl;
	}

	try
	{
		if (result <= 2147483647 && result >= -2147483648)
			cout << result << std::endl;
	}
	catch (out_of_range exp)
	{
		cout << "out_of_range :" << exp.what() << endl;
	}
	return 0;
}