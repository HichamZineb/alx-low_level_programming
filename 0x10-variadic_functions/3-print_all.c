#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments
 *
 * Return: Nothing
 */
void print_all(const char * const format, ...)

{
	int i = 0;
	char *s;
	int flag;
	
	va_list ap;

	va_start(ap, format);

	while (format != NULL && format[i] != '\0')
	{
		switch(format[i])
		{
		case 'c':
			printf("%c", va_arg(ap, int));
			flag = 0;
			break;
			
		case 'i':
			printf("%i", va_arg(ap, int));
			flag = 0;
			break;
		
		case 'f':
			printf("%f", va_arg(ap, double));
			flag = 0;
			break;
		
		case 's':
			s = va_arg(ap, char*);
			if (s == NULL)
				s = "(nil)";
			
			printf("%s", s);
			flag = 0;
			break;

		default:
			flag = 1;
			break;
		}
		if (format[i + 1] != '\0' && flag == 0)
			printf(", ");

		i++;
	}
	printf("\n");
}		
