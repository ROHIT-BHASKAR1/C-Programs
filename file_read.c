#include <stdio.h>
int main(){ FILE *f = fopen("out.txt","r"); if(!f)
  return 0; 
           char s[200];
while(fgets(s,200,f)) fputs(s, stdout); fclose(f);
           return 0; }
