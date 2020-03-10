#include<stdio.h>
int main(void){

  int a=0;
  int *pa=&a;
  int **pp=&pa;
  printf("%d\n %d\n %d\n %d\n %d\n %d\n %d\n",&a,pa,(*pa),&pa,pp,(*pp),(**pp));
  return 0;
}
