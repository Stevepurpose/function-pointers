#include <stdio.h>
int sum(int a, int b){
    return a + b;
}

int main(){
int (*pointer)(int, int) = &sum;

 printf("%d", pointer(5,8));

}