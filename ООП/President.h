#pragma once
#include <iostream>
#include "Employer.h"
using namespace std;

class President:public Employer
{
private:


public:
	President();
	President(string, int);
	void Print() override;

	~President();

};

