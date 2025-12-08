#include <stdio.h>
#include <string.h>
int main(){ char s[200]; fgets(s,200,stdin); int n=strlen(s); if(s[n-1]=='\n')
n--; int i=0,j=n-1; while(i<j) if(s[i++]!=s[j--]){ printf("Not Palindrome\n");
return 0; } printf("Palindrome\n");
return 0; }
