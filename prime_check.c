#include <stdio.h>
#include <math.h>
int main(){int n,i,flag=1; scanf("%d",&n); if(n<2) flag=0; for(i=2;i<=sqrt(n);i+
+) if(n%i==0){ flag=0; break; } printf(flag?"Prime\n":"Not Prime\n");
           return 0;}
