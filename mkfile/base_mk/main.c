#include <stdio.h>
#include "common.h"
#include "add.h"
#include "dec.h"

int main(void)
{
	my_add(10,20);
	my_dec(10,4);
//	my_mul(1,5);
	return 0;
}

void my_print(int a)
{
	printf("fisrt para=%d\n",a);
}
