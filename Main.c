#include<stdio.h>
a() 
{
	printf("Function");
}
b()
{
	printf("Function in C");
}
c()
{
	printf("C function");
}
main()
{
	int (*ptr[3])();
	ptr[0] = a;
	ptr[1] = b;
	ptr[2] = c;
	ptr[2]();
	return 0;
}