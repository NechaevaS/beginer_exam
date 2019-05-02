#include <unistd.h>

char	*ft_strcpy(char *s1, char *s2);

int main()
{
	char s1[] = {'0', '0', '0', '\0'};
	char s2[] = {'a', 'b', 'c', '\0'};
	write(1, s1, 4);
	ft_strcpy(s1, s2);
	write(1, s1, 4);

}
