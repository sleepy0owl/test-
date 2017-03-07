#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *start = NULL;
struct node *createlinklist(struct node *start){
    struct node *ptr, *newnode;
    int num;
    printf("enter the data:");
    scanf("%d", &num);
    while(num != -1){
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = num;
    if(start == NULL){
        start = newnode;
        newnode->next = NULL;
    }else{
        ptr = start;
        while(ptr != NULL){
            ptr = ptr->next;
            ptr = newnode;
            newnode->next = NULL;
        }
    }
    printf("enter the data:");
    scanf("%d", &num);
    }
    return start;
}

struct node * display(struct node *start){
    struct node *ptr;
    ptr = start;
    while(ptr != NULL){
    printf("%d\t", &ptr->data);
    ptr = ptr->next;
    }
    return start;
}

int main(){
    createlinklist(start);
    display(start);
    return 0;
}
