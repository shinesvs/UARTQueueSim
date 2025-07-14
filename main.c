#include <stdio.h>
#include <stdlib.h>
#include "UARTQueue.h"
#include "UARTQueue.c"


int main()
{
  
  enqueue('a');
  enqueue('b');
  enqueue('c');
  
  printBuffer();
  printf("%c\n",dequeue());
  printf("%c\n",dequeue());
  printf("%c\n",dequeue());
  printf("%d\n", isEmpty());
  printBuffer();

}