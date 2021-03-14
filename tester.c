#include <stdio.h>
#include <string.h>
#include "libft.h"

void ft_hello(char *str)
{
	str[0] = 'H';
	str[1] = 'e';
	str[2] = 'l';
	str[3] = 'l';
	str[4] = 'o';
	str[5] = ' ';
	str[6] = 'W';
	str[7] = 'o';
	str[8] = 'r';
	str[9] = 'l';
	str[10] = 'd';
	str[11] = '!';
	str[12] = '\0';
}

int main(void)
{
	char string[] = "Hello World!\0";
	char string1[] = "000000000000\0";
	size_t i;
	char *str1;
	char *str2;

	printf("test string: %s\n", string);

	ft_memset(string, '1', sizeof(string));			/*Проверка функции ft_memset*/
	printf("string after ft_memset: %s\n", string);

	ft_bzero(string, sizeof(string));			/*Проверка функции ft_bzero*/
	printf("string after ft_bzero in digits: ");
	i = 0;
	while (i < sizeof(string) - 1)
	{
		printf("%d", string[i]);
		i++;
	}
	printf("\n");

	ft_hello(string);					/*Проверка функции ft_memcpy*/
	str1 = string;
	str2 = string + 2;
	ft_memcpy(str2, str1, 7);
	printf("string after ft_memcpy: %s\n", str1);
	
	ft_hello(string);					/*Проверка функции ft_memmove*/
	ft_memmove(str2, str1, 7);
	printf("string after ft_memmove: %s\n", string);

	ft_hello(string);					/*Проверка функции ft_memccpy*/
	unsigned char *test = ft_memccpy(string1, string, 'W', sizeof(string));
	printf("string1 = %s, string2 = %s, pointer string2 = %p, pointer of stop char = %p\n", string, string1, string1, test);

	ft_hello(string);					/*Проверка функции ft_memchr*/
	char *test1 = ft_memchr(string, 'W', sizeof(string));
	printf("searched char in string 'W': %c = %p\n", test1[0], test1);

	ft_hello(string);					/*Проверка функции ft_memcmp*/
	ft_hello(string1);
	string1[6] = 'E';
	printf("result of compare strings: %d(18)\n", ft_memcmp(string, string1, sizeof(string)));

	printf("legth of string: %ld(12)\n", ft_strlen(string));/*Проверка функции ft_strlen*/

	ft_memset(string1, '0', sizeof(string1));		/*Проверка функции ft_strlcpy*/
	printf("string2 before ft_strlcpy: \"%s\", ", string1);
	size_t test2 = ft_strlcpy(string1, string, sizeof(string));
	printf("after: \"%s\", string length: %ld\n", string1, test2);

	char string2[25] = "Hello World!\0";			/*проверка функции ft_strlcat*/
	printf("destination = %s, ", string2);
	test2 = ft_strlcat(string2, string, sizeof(string2));
	printf("result = %s, length = %lu\n", string2, test2);

	test1 = ft_strchr(string2, 'o');			/*проверка функции ft_strchr*/
	printf("searched character = o, returned character = %c, start:result = %p:%p\n", test1[0], string2, test1);

	test1 = ft_strrchr(string2, 'd');			/*проверка функции ft_strrchr*/
	printf("searched character = d, returned character = %c, start:result = %p:%p\n", test1[0], (string2 + 23), test1);

	ft_bzero(string1, 12);					/*проверка функции ft_strnstr*/
	string1[0] = 'W';
	string1[1] = 'o';
	string1[2] = 'r';
	string1[3] = '\0';
	test1 = ft_strnstr(string2, string1, 12);
	printf("searched string = \"%s\", result = %s\n", string1, test1);

	ft_hello(string1);
	string[11] = '\0';
	printf("result = %d\n", ft_strncmp(string, string1, sizeof(string)));

	printf("result = %d\n", ft_atoi("-2345123"));
}
