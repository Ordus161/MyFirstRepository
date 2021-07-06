#pragma once
#include "Employer.h"

class Worker : public Employer
{
private:


public:
	Worker();
	Worker(string, int);
	void Print() override;
	~Worker();

};

