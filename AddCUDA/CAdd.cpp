#include "CAdd.h"
#include "kernel.h"
#include <memory.h>


CAdd::CAdd(int n)
{
	this->n = n;
	a = new int[n];
	b = new int[n];
	c = new int[n];
	memset(a, 0, sizeof(int) * n);
	memset(b, 0, sizeof(int) * n);
	memset(c, 0, sizeof(int) * n);
}


CAdd::~CAdd()
{
	delete[] a;
	delete[] b;
	delete[] c;
}

void CAdd::SetA(int i, int value)
{
	if (i < n) a[i] = value;
}

void CAdd::SetB(int i, int value)
{
	if (i < n) b[i] = value;
}

int CAdd::GetC(int i)
{
	return (i < n) ? c[i] : 0;
}

bool CAdd::Add()
{
	return addWithCuda(c, a, b, n);
}
