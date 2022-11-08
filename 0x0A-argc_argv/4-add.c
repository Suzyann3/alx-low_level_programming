#include <stdio.h>
#include <stdlib.h>

int is_number(char *str);

/**
* main - Entry point
* @argc: arg count
* @argv: arg vector
* Return: success
*/

int main(int argc, char *argv[])
{
int result = 0, i;

if (argc > 1)
{
for (i = 1; i < argc; i++)
{
if (is_number(argv[i]) == 1)
{

printf("Error\n");
return (1);
}
else
result += strtol(argv[i], NULL, 10);
}
printf("%d\n", result);
}
else
{
printf("0\n");
return (0);
}

exit(EXIT_SUCCESS);
}

