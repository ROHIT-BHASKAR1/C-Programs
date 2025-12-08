#include <stdio.h>
int main(){int n,temp,r=0; 
           scanf("%d",&n); temp=n; 
           while(n){ r=r*10+n%10; n/=10; } printf(temp==r?"Palindrome\n":"Not Palindrome\n"); 
return 0;}
