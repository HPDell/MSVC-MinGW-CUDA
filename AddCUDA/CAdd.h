#pragma once

#include "IAdd.h"

class CAdd : public IAdd
{
private:
	int n;
	int* a;
	int* b;
	int* c;
public:
	CAdd(int n);
	~CAdd();

	virtual void SetA(int i, int value);
	virtual void SetB(int i, int value);
	virtual int GetC(int i);
	virtual bool Add();
};

