/**
 * _strcpy - copy string unto the first argument
 * @dest: first argument to be replace
 * @src: second argument to be copied
 * Return: return the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int a;


	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';
	return (dest);
}
