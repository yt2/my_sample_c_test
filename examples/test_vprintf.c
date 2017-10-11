#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>



void errmsg( const char * format, ...)
{
	va_list args;
	printf("Error: ");
	va_start(args, format);
	vprintf(format, args);
	printf("\a\n");
	va_end(args);
}


