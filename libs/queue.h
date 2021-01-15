/* Define a simple Queue library.
   It's created for educational purposes.
   Lib created by
   Date: 
*/

#ifndef __QUEUE_H__
#define __QUEUE_H__

#include <stdio.h>
#include <stdlib.h>

/* Define the queue type. */
typedef struct kyu{
  unsigned int key;
  struct kyu *next;
}*queue;

/* It inits the queue. Required to use the queue. */
void initQueue(queue *kyu);

/* Add a new member in the queue. */
void insertInQueue(queue *kyu, int num);

/* Returns the next member of the queue. */
int nextInQueue(queue *kyu);

/* Deletes a member by key number. */
void removeFromQueue(queue *kyu, int num);

/* Searches a member by key number and returns the position of the member. */
int searchInQueue(queue kyu, int num);

/* Print the queue. */
void printQueue(queue kyu);

#endif