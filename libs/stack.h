/** Defines a simple List library.
 *  Created for educational purposes.
 *  Lib created by https://github.com/wanderlinoliveira
 *  May/2017
 * */

#ifndef __STACK_H__
#define __STACK_H__

#include <stdio.h>
#include <stdlib.h>

/* Defines the stack type. */
typedef struct type{
  int key;
  struct type* next;
}stack;

/* Inits the list. Required to use the list. */
void createStack(stack **);

/* Pushes in the stack. */
void push(stack **, int);

/* Pops the stack. */
int pop(stack **);

/* Prints the Stack. */
void printStack(stack *);


#endif