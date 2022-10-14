#include "variadic_functions.h"
/**
 * print_all - print anything
 * @format: type of argument
 */
void print_all(const char * const format, ...)
{
	va_list arg;
	unsigned int i = 0;
	char *str;


	va_start(arg, format);
	while (format[i] && format)
	{
		switch (format[i++])
		{
			case 'c':
				printf("%c", va_arg(arg, int));
				break;
			case 'i':
				printf("%d", va_arg(arg, int));

				break;
			case 'f':
				printf("%f", va_arg(arg, double));
				break;
			case 's':
				str = va_arg(arg, char *);
				if (str == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
			default:
				continue;
		}
		if (format[i])
			printf(", ");
	}
	printf("\n");
	va_end(arg);
}
