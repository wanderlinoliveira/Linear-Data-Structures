/** Defines a simple List library.
 *  Created for educational purposes.
 *  Lib created by https://github.com/wanderlinoliveira
 *  May/2017
 * */

#ifndef __LIST_H__
#define __LIST_H__

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* Defines the list type. */
typedef struct ls{
  int key;
  struct ls* next;
}list;

/* Inits the list. Required to use the list. */
void createList(list **);

/* Adds a new member in the list. */
void insertInList(list **, int);

/* Searches a member by key number. */
bool searchInList(list *, int);

/* Prints the list. */
void printList(list *);

/* Deletes a member by key number. */
void removeFromList(list **, int);


#endif