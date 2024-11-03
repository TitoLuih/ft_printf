/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lruiz-to <lruiz-to@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:25:54 by lruiz-to          #+#    #+#             */
/*   Updated: 2024/10/28 12:00:33 by lruiz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_filter(char const *content, int index, va_list *args)
{
	int	counter;

	counter = 0;
	if (content[index] == 'c')
		counter += ft_printchar(va_arg(*args, int));
	if (content[index] == 's')
		counter += ft_printstr(va_arg(*args, char *));
	if (content[index] == 'p')
		counter += ft_printptr(va_arg(*args, unsigned long long));
	if (content[index] == 'd' || content[index] == 'i')
		counter += ft_printdec(va_arg(*args, int));
	if (content[index] == 'u')
		counter += ft_printunsigned(va_arg(*args, unsigned int));
	if (content[index] == 'x' || content[index] == 'X')
		counter += ft_printhexa(va_arg(*args, unsigned int), content[index]);
	if (content[index] == '%')
		counter += ft_printchar('%');
	return (counter);
}

int	ft_printf(char const *content, ...)
{
	va_list	args;
	int		index;
	int		counter;

	index = 0;
	counter = 0;
	va_start(args, content);
	while (content[index])
	{
		if (content[index] != '%')
			counter += ft_printchar(content[index]);
		else
		{
			index++;
			counter += ft_filter(content, index, &args);
		}
		if (counter == -1)
			return (-1);
		index++;
	}
	va_end (args);
	return (counter);
}
