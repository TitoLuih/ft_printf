/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lruiz-to <lruiz-to@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 17:30:56 by lruiz-to          #+#    #+#             */
/*   Updated: 2024/10/25 09:55:13 by lruiz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printstr(char *s)
{
	int	counter;

	counter = 0;
	if (!s)
		return (ft_printstr("(null)"));
	while (s[counter])
	{
		write (1, &s[counter], 1);
		counter++;
	}
	return (counter);
}
