#include <stdlib.h>
#include <stdio.h>
#define max 10
int top = -1;
void push(int stk[], int val) {
  /* code */
  if (top == max -1) {
    /* code */
    printf("stack overflow" );
  }else{
    top++;
    stk[top] = val;
  }
}

void  pop(int stk[]) {
  /* code */
  int val;
  if (top == -1) {
    /* code */
    printf("stack underflow\n" );
  }else{
    val = stk[top];
    top--;
  }
}

int peek(int stk[]){
  int val;
  if (top == -1) {
    /* code */
    printf("the stack is empty\n" );
  }else{
    val = stk[top];
    printf("%d\n",val);
  }
  return val;
}

void display(int stk[]){
  int i;
  if (top == -1) {
    /* code */
    printf("the stack is empty\n" );
  }else{
    for(i=top;i>=0;i--){
      printf("%d\t", stk[i]);
    }
  }

  printf("\n" );
}

int main(int argc, char const *argv[]) {
  int stk[10];
  push(stk,1);
  push(stk,2);
  push(stk,3);
  push(stk,4);
  display(stk);
  peek(stk);
  pop(stk);
  pop(stk);
  display(stk);
  return 0;
}
