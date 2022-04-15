#include "variadic_functions.h"

/**
  * print_all - print anything
  * @format: a list of type of arguments passed to the function
  * @...: the list of argument to print
  */
void print_all(const char * const format, ...)
{
	va_list ap;
	char *str;
	unsigned int test = 0, i = 0;


	if (format == NULL)
		return;
	va_start(ap, format);
	while (*(format + i))
	{
		switch (*(format + i))
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				test = 1;
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				test = 1;
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				test = 1;
				break;
			case 's':
				str = va_arg(ap, char *);
				printf("%s", str);
				test = 1;
				while (!str)
				{
					printf("nil");
					test = 0;
					break;
				}
				break;
		}
		if (*(format + i + 1) && test)
			printf(", ");	
		i++;
		test = 0;
	}
	printf("\n");
	va_end(ap);
}
