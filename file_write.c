#include <stdio.h>
int main(){ FILE *f = fopen("out.txt","w"); if(!f) return 0; fprintf(f, "Hello file\n"); fclose(f);
return 0; }
