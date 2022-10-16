#include <stdio.h>
#include <stdlib.h>

int ft_iterative_factorial(int nb);
int ft_recursive_factorial(int nb);
int ft_iterative_power(int nb, int power);
int ft_recursive_power(int nb, int power);
int ft_fibonacci(int index);
int ft_sqrt(int nb);
int ft_is_prime(int nb);
int ft_find_next_prime(int nb);

/*Aportación del archivo main.c de Raúl Ágreda.

GitHub de Raúl Ágreda: https://github.com/RaulAgreda
*/

int	main(int argc, char **argv)
{
	if (argc == 0)
		return (-1);
	switch (atoi(argv[1]))
	{
		case 0:
			printf("%d\n", ft_iterative_factorial(atoi(argv[2])));
			break;
		case 1:
			printf("%d\n", ft_recursive_factorial(atoi(argv[2])));
			break;
		case 2:
			printf("%d\n", ft_iterative_power(atoi(argv[2]), atoi(argv[3])));
			break;
		case 3:
			printf("%d\n", ft_recursive_power(atoi(argv[2]), atoi(argv[3])));
			break;
		case 4:
			printf("%d\n", ft_fibonacci(atoi(argv[2])));
			break;
		case 5:
			printf("%d\n", ft_sqrt(atoi(argv[2])));
			break;
		case 6:
			printf("%d\n", ft_is_prime(atoi(argv[2])));
			break;
		case 7:
			printf("%d\n", ft_find_next_prime(atoi(argv[2])));
			break;
	}
}
