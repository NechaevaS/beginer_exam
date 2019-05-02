#include <stdio.h>

int	max(int* tab, unsigned int len);

int main()
{
	int res;
	int a[] = {2, 34, 975, 1};
	 res = max(a, 4);
	printf("%d", res);
}
