#include <stdio.h>
long powi(long a,int b){ long r=1; while(b--) r*=a; return r; } int main(){
long a; int b; scanf("%ld %d",&a,&b); printf("%ld\n", powi(a,b)); 
return 0; }
