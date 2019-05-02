#include <unistd.h>
char    *ft_strrev(char *stry);

int main()
{
	char str[] = {'a', 'b', 'c', 'd', 'e', '\0'};
	
	write(1, str, 5);
	ft_strrev(str);
	write(1, str, 5);
	return (0);
}
