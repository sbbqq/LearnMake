#include<stdio.h>
struct St{
 int a;
 };
typedef const struct St* Env;
typedef struct St env;
int main(){
struct St st;

Env envv;
st.a=10;
envv=&st;
printf("Env=%d\n,*env=%d, struct=%d,&stu=%d",envv,*envv,st,&st);
return 0;
}
