#pragma once

#ifdef DLL_EXPORT
#define ADDCUDA_API extern "C" __declspec(dllexport)
#else
#define ADDCUDA_API extern "C" __declspec(dllimport)
#endif // DLL_EXPORT

ADDCUDA_API int* createVector(int n);
ADDCUDA_API void setVector(int* ptr, int i, int value);
ADDCUDA_API int getVector(int* ptr, int i);
ADDCUDA_API void deleteVector(int* ptr);
ADDCUDA_API bool addVector(int* a, int* b, int n, int *c);