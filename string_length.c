#include <stdio.h>
#include <string.h>
int main(){ char s[200]; fgets(s,200,stdin); printf("%ld\n", strlen(s)
(s[strlen(s)-1]=='\n'));
           return 0; }
