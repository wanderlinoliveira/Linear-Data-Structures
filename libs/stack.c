#include "stack.h"

void createStack(stack **stk){
  *stk=NULL;
}

void push(stack **stk, int x){
  stack *newStack;
  newStack= malloc(sizeof(stack));
  newStack->key=x;
  newStack->next= *stk;
  *stk= newStack;
}

int pop(stack **stk){
  int num;
  stack *aux;
  aux= *stk;
  *stk= aux->next;
  num= aux->key;
  free(aux);
  return num;
}

void printStack(stack *stk){
  if(stk==NULL) printf("Empty stack\n");
  else{
    while(stk != NULL){
      printf("%i\n", stk->key);
      stk= stk->next;
    }
  }
}