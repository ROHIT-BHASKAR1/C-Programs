#include <stdio.h>
int main(){ int a=10, *p=&a; printf("%d %p\n", *p, (void*)p);
return 0; }
