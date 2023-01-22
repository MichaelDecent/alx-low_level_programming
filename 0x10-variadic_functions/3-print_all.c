#include "variadic_functions.h"
/**
 * print_all -  a function that prints anything
 * @format: format
 *
 */
void print_all(const char * const format, ...)
{
	va_list list;
	int i, len;
	char *str;
	char *separator = ", ";

	va_start(list, format);

	len = 0;
	while (format != NULL && format[len] != '\0')
		len++;
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		if (i == len - 1)
			separator = "";

		switch (format[i])
		{
			case 'c':
				printf("%c%s", va_arg(list, int), separator);
				break;
			case 'i':
				printf("%d%s", va_arg(list, int), separator);
				break;
			case 'f':
				printf("%f%s", va_arg(list, double), separator);
				break;
			case 's':
				str = va_arg(list, char*);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", str, separator);
				break;
		}
		i++;
	}
	printf("\n");
	va_end(list);

}
