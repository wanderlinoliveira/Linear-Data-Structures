#include "list.h"

void createList (list **ls){
  *ls=NULL;
}

void insertInList(list **ls, int num){
  list* nuList;
  nuList= malloc(sizeof(list));
  nuList->key= num;
  nuList->next = *ls;
  *ls= nuList;
}

bool searchInList(list *ls, int num){
  if(ls==NULL) return false;
  
  while(ls!=NULL){
    if(ls->key==num) return true;
    ls=ls->next;
  }
  return false;
}

void printList(list *ls){
  if(ls==NULL)
   printf("Empty list");
  else{
    while(ls!=NULL){
      printf("%i ", ls->key);
      ls= ls->next;
    }
  }
  printf("\n");  
}

void removeFromList(list **ls, int num){
  if(*ls==NULL) return;

  list *aux1;
  aux1= *ls;

  if(aux1->key == num){
    *ls=aux1->next;
    free(aux1);
  }else{
    while(aux1->next!=NULL){
      if((aux1->next)->key == num){
        list *aux2= aux1->next;
        aux1->next= aux2->next;
        free(aux2);
        return;
      }
      aux1= aux1->next;
    }
    if(aux1->key == num) aux1 = NULL;
  }
    
}