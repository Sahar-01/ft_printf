#include <stdarg.h>
#include <stdio.h>

float	average(int n, ...)
{
	va_list ap;
	int		total;
	int		i;

	va_start(ap, n);
	total = 0;
	i = 0;
	while( i < n)
	{
		total += va_arg(ap, int);
		i++;
	}
	return (float)total / n;
}
int		main()
{
	float	average_age;

	average_age = average(5, 	1, 2, 3, 4, 5);
	printf("The average age is %f\n", average_age);
}
