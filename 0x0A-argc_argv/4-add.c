#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - adds positive numbers & prints the result
 * @argc: number of arguments passed to main
 * @argv: array of arguments (strings) passed to main
 * Return: 0 if successful, otherwise 1
 */

int main(int argc, char *argv[])
{
	int i, int j, res = 0, flag = 0;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}

	else
	{
		for (i = 1; i < argc; i++)
		{
			for(j = 0; argv[i][j] != '\0'; j++)
				{
					if (!(isdigit(*argv[i])))
					{
						flag = 1;
						break;
					}
				}
			if (flag == 1)
			{
				printf("Error\n");
				return (1);
			}

			res += atoi(argv[i]);
		}
	}
		
	printf("%d\n", res);
	return (0);
}

	
