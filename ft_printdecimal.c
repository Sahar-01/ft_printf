/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printdecimal.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scheragh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 21:29:35 by scheragh          #+#    #+#             */
/*   Updated: 2025/01/27 21:33:25 by scheragh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_libft.h"

int ft_printdecimal(int n)
{
	char p;

	if (n < 0)
	{
		if (n = -2147483648)
		{
			write(1, "-2147483648", 11);
			return ;
		}
		else
		{
			n = -n
			write(1, "-", 1);
			ft_pritdecimal(n);
			return ;
		}
	}
	if (n > 9)
		ft_putnbr_fd(n / 10);
	p = (n % 10) + 48;
	write(1, &p, 1);
}

