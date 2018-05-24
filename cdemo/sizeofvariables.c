#include <stdio.h>

int main()

{
	int a = 100;
	int b = 200;
	int c = 300;
	int d = 400;
	int e = a + b;
	int f = c*d;

	printf("Var a has a size of %d bytes!\n", sizeof(a));
	printf("Var b has a size of %d bytes!\n", sizeof(b));
	printf("Var c has a size of %d bytes!\n", sizeof(c));
	printf("Var d has a size of %d bytes!\n", sizeof(d));
	printf("Var a plus b is %d!\n", e);
	printf("Var c times d is %d!\n",f); 
}
