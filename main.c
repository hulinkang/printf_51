#include "main.h"
#include <stdio.h>
#include "printf51.h"

void main(void)
{
	int a;
	printf51_init();
	
	printf("char %d\n",a = sizeof(char));
	printf("int %d\n",a = sizeof(int));
	printf("unsigned long %d\n",a = sizeof(unsigned long));
	printf("float %d\n",a = sizeof(float));
	
	while(1)
		;
}