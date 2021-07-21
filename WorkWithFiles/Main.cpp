#include <iostream>
#include <windows.h>
#include <io.h>
#include <stdio.h>
using namespace std;


int main()
{
	const char* source = "test_from.txt";
	const char* destination = "test_to.txt";

	try
	{
		CopyFile(source, destination);
	}
	catch (exception& exp)
	{
		cout << "Error in CopyFile->" << exp.what() << endl;
	}

}