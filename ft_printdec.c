/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printdec.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lruiz-to <lruiz-to@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 16:22:55 by lruiz-to          #+#    #+#             */
/*   Updated: 2024/10/23 18:04:34 by lruiz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printdec(long long int n)
{
	char	res;
	int		counter;

	counter = 0;
	if (n < 0)
	{
		n = -n;
		counter += ft_printchar('-');
	}
	if (n > 9)
	{
		counter += ft_printdec(n / 10);
		if (counter == -1)
			return (-1);
	}
	res = n % 10 + '0';
	counter += ft_printchar(res);
	if (counter == -1)
		return (-1);
	return (counter);
}
