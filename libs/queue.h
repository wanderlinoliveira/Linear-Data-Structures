/** Defines a simple List library.
 *  Created for educational purposes.
 *  Lib created by https://github.com/wanderlinoliveira
 *  May/2017
 * */

#ifndef __QUEUE_H__
#define __QUEUE_H__

#include <stdio.h>
#include <stdlib.h>

/* Defines the queue type. */
typedef struct kyu{
  unsigned int key;
  struct kyu *next;
}*queue;

/* Inits the queue. Required to use the queue. */
void initQueue(queue *);

/* Adds a new member in the queue. */
void insertInQueue(queue *, int);

/* Returns the next member of the queue. */
int nextInQueue(queue *);

/* Deletes a member by key number. */
void removeFromQueue(queue *, int);

/* Searches a member by key number and returns the position of the member. */
int searchInQueue(queue , int);

/* Prints the queue. */
void printQueue(queue);

#endif