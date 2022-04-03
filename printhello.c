#include<stdio.h>
#include"hello.h"
int hello()
{
	return "Hello,world!\n";
}
int main()
{
	printf("%s",hello());
	return 0;
}
