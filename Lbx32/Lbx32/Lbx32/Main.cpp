#include "Main.h"
#include<stdio.h>
int main(void)
{
	int i = 2147483647;
	unsigned int j = 4294967295;

	printf("%d %d %d\n",i,i+1,i+2);
	printf("%u %u %u\n",i,i+1,i+2);

	return 0;
}