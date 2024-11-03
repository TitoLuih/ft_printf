/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lruiz-to <lruiz-to@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 18:56:13 by lruiz-to          #+#    #+#             */
/*   Updated: 2024/10/28 11:58:47 by lruiz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(char const *content, ...);
int	ft_printstr(char *s);
int	ft_printdec(long long int n);
int	ft_printhexa(unsigned long long n, char c);
int	ft_printunsigned(unsigned long long n);
int	ft_printptr(unsigned long long ptr);
int	ft_printchar(char c);

#endif