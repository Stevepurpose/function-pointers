#include <stdio.h>

int add(int x, int y){
  return x + y;
}

int subtract(int x, int y){
    return x - y;
}

int main(){
 int(*funcpointer)(int, int);
 int operation;
 printf("Enter operation you want:\n");
 scanf("%d", &operation);
 
 if(operation==1){
    funcpointer = add;
 }

else if(operation==2){
   funcpointer = subtract;
 }

 else{
    printf("operation not found");
 }

printf("%d\n", funcpointer(2,5));
 return 0;

}