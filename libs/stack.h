/* Define a simple Stack library.
   It's created for educational purposes.
   Lib created by
   Date: 
*/

#ifndef __STACK_H__
#define __STACK_H__

#include <stdio.h>
#include <stdlib.h>

/* Define the stack type. */
typedef struct type{
  int key;
  struct type* next;
}stack;

/* It inits the list. Required to use the list. */
void createStack(stack **);

/* Insert in the stack. */
void push(stack **, int);

/* Pops the stack. */
int pop(stack **);

/* Print the Stack. */
void printStack(stack *);


#endif