/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lruiz-to <lruiz-to@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 19:04:50 by lruiz-to          #+#    #+#             */
/*   Updated: 2024/10/22 19:16:32 by lruiz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printunsigned(unsigned long long n)
{
	int	count;
	int	aux;

	count = 0;
	if (n <= 9)
	{
		aux = ft_printchar(n + '0');
		if (aux == -1)
			return (-1);
		count += aux;
	}
	else
	{
		aux = ft_printunsigned(n / 10);
		if (aux == -1)
			return (-1);
		count += aux;
		aux = ft_printunsigned(n % 10);
		if (aux == -1)
			return (-1);
		count += aux;
	}
	return (count);
}
