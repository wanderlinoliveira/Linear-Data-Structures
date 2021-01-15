#include "myInterfaces.h"

int intScanner(){
    int val;
    scanf("%i", &val);
    getc(stdin);
    return val;
}

void stackInterface(){   
  char ent;
  int val;
  stack *stk;
  createStack(&stk);

  printf("\nStack\n\nEnter:\ni {id} -  Push the id in the stack;\np - Pop the stack;\ns - Show the stack;\ne - Exit;\n");

  while(1){    
    scanf("%c", &ent); 
    if(ent == 10) continue;
    getc(stdin);    
    
    switch (ent){            
      case 'i':
        val= intScanner();
        push(&stk, val);
        break;
      
      case 'p':
        val= pop(&stk);
        printf("> POP: %i\n", val);
        break;
      
      case 's':
        printf("> Current stack:\n");
        printStack(stk);
        printf("\n");
        break;

      case 'e':
        return;
    } 
  }
  
}

void listInterface(){   
  char ent;
  int val;
  list *ls;
  createList(&ls);

  printf("\nList\n\nEnter:\ni {id} -  Insert the id in the list;\nr {id} - Remove the in from the list;\ns {id} - Search the id in the list;\np - Print the list;\ne - Exit;\n");

  while(1){    
    scanf("%c", &ent); 
    if(ent == 10) continue;
    getc(stdin);    
    
    switch (ent){            
      case 'i':
        val = intScanner();
        insertInList(&ls, val);
        printf("> Current list: ");
        printList(ls);
        break;
      
      case 'r':
        val = intScanner();
        removeFromList(&ls, val);
        printf("> Current list: ");
        printList(ls);
        break;
      
      case 's':
        val = intScanner();
        if(searchInList(ls, val)) printf("> %i is in the list.\n", val);
        else printf("> %i ISN'T in the list.\n", val);
        break;

      case 'p':
        printf("> Current list: ");
        printList(ls);
        break;

      case 'e':
        return;
    } 
  }
  
}

void queueInterface(){   
  char ent;
  int val;
  queue kyu;
  initQueue(&kyu);

  printf("\nQueue\n\nEnter:\ni {id} -  Insert the id in the queue;\nn - Return the next id in the queue;\nr {id} - Remove the in from the queue;\ns {id} - Search the id in the queue;\np - Print the queue;\ne - Exit;\n");

  while(1){    
    scanf("%c", &ent); 
    if(ent == 10) continue;
    getc(stdin);    
    
    switch (ent){            
      case 'i':
        val = intScanner();
        insertInQueue(&kyu, val);
        break;
      
      case 'n':
        val = nextInQueue(&kyu);
        printf("> Next: %i.\n", val);
        break;
      
      case 'r':
        val = intScanner();
        removeFromQueue(&kyu, val);
        break;
      
      case 's':
        val = intScanner();
        int pos= searchInQueue(kyu, val);
        if(pos) printf("> %i is in the position: %i.\n", val, pos);
        else printf("> %i ISN'T in the queue.\n", val);
        break;

      case 'p':
        printf("> Current queue: ");
        printQueue(kyu);
        break;

      case 'e':
        return;
    } 
  }
  
}