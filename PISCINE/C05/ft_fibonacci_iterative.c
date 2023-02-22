int	ft_fibonacci(int index)
{
	int nb1;
	int nb2;
	int next;	
	
	nb1 = 0;
	nb2 = 1;
	index = index -1;
	while (index > 0)
	{
		next = nb1 + nb2;
		nb1 = nb2;
		nb2 = next;
		index--;
	}
	return (next);
}

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	(void)argc;
	int z;

	z = atoi(argv[1]);
	printf("%d\n", ft_fibonacci (z));
	return (0);
}
