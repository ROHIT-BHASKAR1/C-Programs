#include <stdio.h>
long lcm(long a,long b){ long g=1; long x=a,y=b; while(y){ long t=x%y; x=y;
y=t;} g=x; return (a/g)*b; }
int main(){ long a,b; scanf("%ld %ld",&a,&b); printf("%ld\n", lcm(a,b));
           return 0;}
