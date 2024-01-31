# Pointers and Functions
This repository shows interactions between functions and pointers. Two of the files show function pointers.
A function pointer is a pointer pointing to the memory address of a function.

Function pointer syntax:
```c
returnType (*pointerName)(parameterTypes);

//We can initialize it by saving the memory address of the function in it:
returnType (*pointerName)(parameterTypes) = &functionName;
```
Can also be written as :

```c
returnType (*pointerName)(parameterTypes) = functionName;
```
Since we know that the name of a function also represents the memory address like in arrays.

we can then call the function with the pointer. See `funcpoint.c` and `funcpointer.c`.


## Returning Pointers and  Addresses  from Functions
Whenever we want to return a memory address from a function, it is always best to use dynamic memory 
allocation. This is because after a function returns from execution, the stack memory of this function 
is deallocated, since allocation and deallocation of memory on the stack is done automatically. To solve
this issue, we use the Heap. 

Unlike the stack, the Heap memory is explicitly allocated by programmers and does not get deallocated until
it is manually freed, using the free(). This free takes the pointer as argument. To achieve this we use the 
`#include <stdlib.h>` at the top of our code. This enables us have access to functions for dynamic memory 
allocation like `malloc` , `calloc`, `realloc`, and `free`.

## Callback Pointers
In this scenario, pointers take the memory address of callback functions and point to them.
This function pointers are taken as arguments of the caller and are used to call the callee.
