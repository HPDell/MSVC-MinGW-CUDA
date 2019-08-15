#pragma once

#include <cuda_runtime.h>

bool addWithCuda(int *c, const int *a, const int *b, unsigned int size);