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
  printf("....the stack size is limited to 10....");

  int val, option;
  do{
	  printf("..........the menu for stack opreation..........\n");
	  printf("1.push \n");
	  printf("2.pop \n");
	  printf("3.peek \n");
	  printf("4.diplay \n");
	  printf("5.exit");
	  scanf("%d", &option);
	  /*will more line later */
  }

  return 0;
}
