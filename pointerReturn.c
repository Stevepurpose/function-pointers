#include <stdio.h>
#include <stdlib.h>


int * someFunc( int* p, int* ptr){

// use malloc to get memory on the heap
int *c = (int*) malloc(sizeof (int));

 *c = (*p ) *  (*ptr);  //multiplication operation
 //c is now pointing to a memory address location on the heap and we control the deallocation
 //of heap memory, unlike stack
    return c;
}


int sum(int x, int y){
    return x + y;
}



int main(){
    int d = 5;
    int e = 6;
  int *pointer = someFunc(&d, &e); // when someFunc finishes executing, the memory is not deallocated
      int result =  sum(2, 3);
  printf("%d\n", *pointer);
  printf("%d", result);
  return 0;
}

