#include <unistd.h>

int is_upper(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int is_lower(char c)
{
	return (c >= 'a' && c <= 'z');
}

char to_upper(char c)
{
	int d = 'a' - 'A';
	return (c - d);
}

char to_lower(char c)
{
	int d = 'a' - 'A';
	return (c + d);
}

int str_len(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int len = str_len(argv[1]);
		if (len > 1)
		{
			int i = 0;
			while (i < len)
			{
				char c = argv[1][i];
				if(is_lower(c))
				{
					c = to_upper(c);
				}
				else if (is_upper(c))
				{
					c = to_lower(c);
				}
				write(1, &c, 1);
				i++;
			}
		}
	}
	write(1, "\n", 1);
}