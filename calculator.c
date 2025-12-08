#include <stdio.h>
int main(){int a,b; char op; if(scanf("%d %d %c",&a,&b,&op)==3){ switch(op){
case '+': printf("%d\n",a+b); break; case '-': printf("%d\n",a-b); break; case
'*': printf("%d\n",a*b); break; case '/': if(b) printf("%d\n",a/b); else
printf("Error\n"); break; } }
return 0; }
