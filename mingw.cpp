#include <stdio.h>
// #define CUDA_C
#ifdef CUDA_C
#include "add.h"
int main(int argc, char const *argv[])
{
    int n = 100000;
    int *a = createVector(n);
    int *b = createVector(n);
    int *c = createVector(n);
    for (size_t i = 0; i < n; i++)
    {
        setVector(a, i, 10);
        setVector(b, i, 100);
        setVector(c, i, 0);
    }
    addVector(a, b, n, c);
    int *result = new int[n];
    for (size_t i = 0; i < n; i++)
    {
        result[i] = getVector(c, i);
    }
    
    printf("result:\n");
    for (size_t i = 0; i < 10; i++)
    {
        printf("%5d", result[i]);
    }
    printf("\n");

    deleteVector(a);
    deleteVector(b);
    deleteVector(c);
    
    return 0;
}
#else
#include "IAdd.h"
int main(int argc, char const *argv[])
{
    int n = 100000;
    IAdd* ptr = Add_new(n);
    for (size_t i = 0; i < n; i++)
    {
        ptr->SetA(i, 10);
        ptr->SetB(i, 100);
    }
    ptr->Add();
    printf("result:\n");
    for (size_t i = 0; i < 10; i++)
    {
        printf("%5d", ptr->GetC(i));
    }
    printf("\n");

    Add_del(ptr);
    
    return 0;
}
#endif