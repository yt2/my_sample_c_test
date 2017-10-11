#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include "examples/test_vprintf.h"


#define E_FOO_FAIL (0)
#define E_FOO_SUCCESS (1)

int my_foo();

int main()
{

	my_foo();
	return EXIT_SUCCESS;
}

int my_foo()
{
	int x=0, y=0;
	int fail = x + y;
	if (fail == E_FOO_FAIL)
	{
		errmsg("%s %d %s", "Failed", 100, "times");
		printf("An error occurred!\n");
		return 0;
	}
	else if (fail == E_FOO_SUCCESS)
	{
		printf("Executed sucessfully!\n");
	}
	
	return 1;
}

