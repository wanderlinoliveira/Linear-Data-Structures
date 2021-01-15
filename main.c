#include "libs/stack.h"
#include "libs/list.h"
#include "libs/queue.h"
#include "libs/myInterfaces.h"

int main(void) {
  char ent;  

  while (1){
    printf("Choose a structure:\n1 - Stack;\n2 - List;\n3 - Queue;\ne - Exit;\n> ");
    scanf("%c", &ent);
    if(ent == 10) continue;
    getc(stdin);   
    
    switch (ent){  
        case '1':
          stackInterface();
          break;

        case '2':
          listInterface();
          break;  

        case '3':
          queueInterface();
          break;

        case 'e':
          return 0;
    }

  }

}
