/* Define a simple List library.
   It's created for educational purposes.
   Lib created by
   Date: 
*/

#ifndef __LIST_H__
#define __LIST_H__

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* Define the list type. */
typedef struct ls{
  int key;
  struct ls* next;
}list;

/* It inits the list. Required to use the list. */
void createList(list **);

/* Add a new member in the list. */
void insertInList(list **, int);

/* Searches a member by key number. */
bool searchInList(list *, int);

/* Print the list. */
void printList(list *);

/* Deletes a member by key number. */
void removeFromList(list **, int);


#endif