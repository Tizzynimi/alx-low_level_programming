#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */

#define LEN 4
void _memset(char *dest, char *src);
char *_strcpy(char *dest, char *src);

int main(void)
	char cpy[LEN + 1] = {0};
char *str;
char *ret;

_memset(cpy, 'H', LEN);
str = "Z";
ret = _strcpy(cpy, str);
printf("%s\n%s\n%s\n", str, cpy, ret);
return (0);
}
