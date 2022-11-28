/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 13:31:12 by digoncal          #+#    #+#             */
/*   Updated: 2022/11/28 10:35:31 by digoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

void	print_arg(va_list args, char type)
{
	if (type == 'c')
		ft_putchar_fd(va_arg(args, int), 1);
	//if (type == 's')
	//if (type == 'p')
	if (type == 'd')
		ft
	//if (type == 'i')
	//if (type == 'u')
	//if (type == 'x')
	//if (type == 'X')
	//if (type == '%')
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list args;

	va_start(args, str);

	i = -1;
	while (str[++i])
	{
		if (str[i] != '%')
			ft_putchar_fd(str[i], 1);
		else
		{
			print_arg(args, str[++i]);
		}
	}
	va_end(args);
	return 0;
}
