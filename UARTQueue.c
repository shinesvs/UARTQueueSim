typedef struct Node {
  char data;
  struct Node * next;
} queue;

queue * __head = NULL;


void enqueue ( char c )
{
  if ( __head == NULL ){
  __head = malloc(sizeof(queue));
  __head -> data = c;
  __head -> next = NULL;
  return;
  }
  
  queue * temp = __head;
  
  while ( temp -> next != NULL ){
   temp = temp -> next;
 }
  
 queue * new_node = malloc(sizeof(queue));
 new_node -> data = c;
 new_node -> next = NULL;
 temp -> next = new_node;
  
}



char dequeue ( )
{
  char temp = __head -> data;
  queue * temp_address = __head -> next;
  free(__head);
  __head = temp_address;
  return temp;
}



int isEmpty()
{
  if (__head != NULL)
  return 0;
  return 1;
  
}



void printBuffer()
{
  queue * temp = __head;
  while ( temp != NULL ){
    printf("%c -> ",temp -> data);
    temp = temp -> next;
  }
  printf("NULL ");
}