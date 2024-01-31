#include <stdio.h>

//callee
int prod(int x, int y){
    return ( x) * (y);
}

//caller                //function pointer
int mainFunc(int count, int (*ptr) (int, int)){
// count = 0;
    count++;
    if(count==1){
        return ptr(5, 6);
    }
     return -1;
}


int main() {

 int (*ptr) (int, int);
ptr = prod;
printf("%d", mainFunc(0, ptr));

    return 0;
}