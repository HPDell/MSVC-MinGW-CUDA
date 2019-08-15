#include "IAdd.h"
#include "CAdd.h"

IAdd* Add_new(int n)
{
	return new CAdd(n);
}

void Add_del(IAdd* ptr)
{
	delete ptr;
}