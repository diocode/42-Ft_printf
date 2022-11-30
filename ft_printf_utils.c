/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 10:20:58 by digoncal          #+#    #+#             */
/*   Updated: 2022/11/29 14:07:30 by digoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

int	count_unbr(unsigned int nbr)
{
	unsigned int	len;

	len = 0;
	while (nbr >= 10)
	{
		nbr = nbr / 10;
		len++;
	}
	len++;
	return (len);
}

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
	int unsigned	tmp;
	int				len;
	char			*str;
	
	len = count_unbr(nbr);
	if (nbr == 0)
	{
		ft_putchar_fd('0', 1);
		return (len);
	}
	str = (char *) malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	str[len--] = '\0';
	tmp = nbr;
	while (len >= 0)
	{
		str[len--] = (tmp % 10) + '0';
		tmp = tmp / 10;
	}
	ft_putstr_fd(str, 1);
	return (count_unbr(nbr));
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
