#include "queue.h"

void initQueue(queue *kyu){
  *kyu=NULL;
}

void insertInQueue(queue *kyu, int num){
  queue newQueue, aux = *kyu;
  newQueue= malloc(sizeof(queue));
  newQueue->key = num;
  newQueue->next= NULL; 
  if(*kyu == NULL) *kyu = newQueue;
  else{
    while(aux->next != NULL) aux= aux->next;
    aux->next = newQueue;
  }
}

int nextInQueue(queue *kyu){
  if(*kyu == NULL) return -1;

  int next;
  queue aux1= *kyu;

  next = aux1->key;
  *kyu = (*kyu)->next; 
  free(aux1);

  return next;
}

void removeFromQueue(queue *kyu, int num){
  if (*kyu == NULL) return;
  
  queue aux1 = *kyu;  
  if(aux1->key == num){
    *kyu= aux1->next;
    free(aux1);
  }
  while(aux1->next != NULL){
    if((aux1->next)->key == num){
      queue aux2 = aux1->next;
      aux1->next = aux2->next;
      free(aux2);
      return;
    }
    aux1= aux1->next;
  }
  if(aux1->key == num){
    //free(aux1->next);
    aux1 = NULL;
  }
}

int searchInQueue(queue kyu, int num){  
  int pos = 0;  
  while(kyu != NULL){
    pos++;
    if(kyu->key == num) return pos;
    kyu= kyu->next;  
  }
  
  return 0;
}

void printQueue(queue kyu){
  if(kyu == NULL) printf("Empty queue");
  else{
    while(kyu != NULL){
      printf("%i ", kyu->key);
      kyu= kyu->next;
    }
  }
  printf("\n");
}