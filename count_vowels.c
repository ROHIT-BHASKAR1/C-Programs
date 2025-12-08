#include <stdio.h>
int main(){ char s[200]; int c=0; fgets(s,200,stdin); for(int i=0;s[i];i++){
char ch=s[i]; if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'|| ch=='A'||
ch=='E'||ch=='I'||ch=='O'||ch=='U') c++; } printf("%d\n",c); 
return 0; }
