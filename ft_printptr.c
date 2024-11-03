/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lruiz-to <lruiz-to@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:09:23 by lruiz-to          #+#    #+#             */
/*   Updated: 2024/10/23 18:08:59 by lruiz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printptr(unsigned long long ptr)
{
	int	count;

	count = 0;
	if (!ptr)
		return (ft_printstr("(nil)"));
	count += ft_printstr("0x");
	count += ft_printhexa(ptr, 'x');
	return (count);
}
