#include<stdio.h>
#include<stdlib.h>
typedef struct node{
 int index;
  struct node * next;}node_t;

int main(void){
  node_t * firstnode=NULL;
  firstnode=(node_t *)malloc(sizeof(node_t));
  firstnode->index=1;
  firstnode->next=NULL;
   printf("fisrtnode=%d *fisrtnode=%d\n",firstnode,*firstnode);
  return 0;
}
