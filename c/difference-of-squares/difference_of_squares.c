#include "difference_of_squares.h"

unsigned int sum_of_squares(unsigned int number)
{
	unsigned int	i;
	unsigned int	result;

	i = 1;
	result = 0;
	while (i <= number)
	{
		result = result + (i * i);
		i++;
	}
	return (result);
}

unsigned int square_of_sum(unsigned int number)
{
	unsigned int	i;
	unsigned int	result;

	i = 1;
	result = 0;
	while (i <= number)
	{
		result = result + i;
		i++;
	}
	result = result * result;
	return (result);
}

unsigned int difference_of_squares(unsigned int number)
{
	unsigned int	result;
	result = square_of_sum(number) - sum_of_squares(number);
	return (result);
}
