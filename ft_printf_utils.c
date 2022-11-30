/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 10:20:58 by digoncal          #+#    #+#             */
/*   Updated: 2022/11/30 16:16:23 by digoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

int	print_hex(unsigned int nbr, int uplow)
{
	unsigned int	tmp;
	int				len;

	tmp = nbr;
	len = 0;
	if (tmp < 16)
	{
		if (uplow)
			write(1, &"0123456789abcdef"[tmp], 1);
		else
			write(1, &"0123456789ABCDEF"[tmp], 1);
		len++;
	}
	if (tmp >= 16)
	{
		len += print_hex(tmp / 16, uplow);
		len += print_hex(tmp % 16, uplow);
	}
	return (len);
}

int	print_unbr(unsigned int nbr)
{
	int	len;
	len = 0;
	if (nbr >= 10)
	{
		len += print_unbr(nbr / 10);
		nbr = nbr % 10;
	}
	if (nbr < 10)
		ft_putchar_fd(nbr + '0', 1);
	return (len + 1);	
}

int	print_nbr(int nbr)
{
	int	len;

	ft_putnbr_fd(nbr, 1);
	len = 0;
	if (nbr < 0)
	{
		nbr = -nbr;
		len++;
	}
	while (nbr >= 10)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len + 1);
}
