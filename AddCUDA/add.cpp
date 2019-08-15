#include "add.h"
#include "kernel.h"

int* createVector(int n)
{
	return new int[n];
}


void deleteVector(int* ptr)
{
	delete[] ptr;
}

void setVector(int* ptr, int i, int value)
{
	ptr[i] = value;
}

int getVector(int* ptr, int i)
{
	return ptr[i];
}

bool addVector(int* a, int* b, int n, int *c)
{
	bool cudaStatus = addWithCuda(c, a, b, n);
	return cudaStatus;
}