#include <stdio.h>
int main(void)
{
	int i, s;

	i = 0;
	s = 0;
	while (i <= 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			s += i;
		}
		i++;
	}
	printf("%d \n", s);
	return (0);

}
