#pragma once

#ifdef DLL_EXPORT
#define ADDCUDA_API __declspec(dllexport)
#else
#define ADDCUDA_API __declspec(dllimport)
#endif // DLL_EXPORT


class ADDCUDA_API IAdd
{
public:
	virtual void SetA(int i, int value) = 0;
	virtual void SetB(int i, int value) = 0;
	virtual int GetC(int i) = 0;
	virtual bool Add() = 0;
};

extern "C" ADDCUDA_API IAdd* Add_new(int n);
extern "C" ADDCUDA_API void Add_del(IAdd* ptr);