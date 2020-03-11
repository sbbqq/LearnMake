#include<stdio.h>
#include<stdlib.h>
typedef struct {
 int n;
 int * p;
 void (*dosomething)(void);
}Jni;
typedef   struct Jni * JniEnv;
int main(void){
 
 Jni jniface;
//jniface=(Jni) malloc(sizeof(Jni ));
typedef   struct Jni * JniEnv;
//JniEnv=&jniface;
printf("%s\n","check somthing:");
printf("struct add=%d jniface=%d",&jniface,jniface);
return 0;

}
