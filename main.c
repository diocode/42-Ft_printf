/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 11:39:47 by digoncal          #+#    #+#             */
/*   Updated: 2022/11/30 09:52:39 by digoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int		size1, size2;
	
	printf("\n===== [%%c] =====\n");
	size1 = ft_printf("ft_printf: %c", 'A');
	ft_printf(" | Size: %d\n", size1);
	size2 = printf("OG_printf: %c", 'A');
	printf(" | Size: %d\n\n", size2);

	printf("===== [%%d] =====\n");
	size1 = ft_printf("ft_printf: %d", 246583726);
	ft_printf(" | Size: %d\n", size1);
	size2 = printf("OG_printf: %d", 246583726);
	printf(" | Size: %d\n\n", size2);
	
	printf("===== [%%i] =====\n");
	size1 = ft_printf("ft_printf: %i", 3475025);
	ft_printf(" | Size: %d\n", size1);
	size2 = printf("OG_printf: %i", 3475025);
	printf(" | Size: %d\n\n", size2);
	
	printf("===== [%%u] =====\n");
	size1 = ft_printf("ft_printf: %u", 2147483647);
	ft_printf(" | Size: %d\n", size1);
	size2 = printf("OG_printf: %u", 2147483647);
	printf(" | Size: %d\n\n", size2);

	printf("===== [%%x] =====\n");
	size1 = ft_printf("ft_printf: %x", 2147483647);
	ft_printf(" | Size: %d\n", size1);
	size2 = printf("OG_printf: %x", 2147483647);
	printf(" | Size: %d\n\n", size2);
	
	printf("===== [%%X] =====\n");
	size1 = ft_printf("ft_printf: %X", 47483647);
	ft_printf(" | Size: %d\n", size1);
	size2 = printf("OG_printf: %X", 47483647);
	printf(" | Size: %d\n\n", size2);

	printf("===== [%%] =====\n");
	size1 = ft_printf("ft_printf: %%");
	ft_printf(" | Size: %d\n", size1);
	size2 = printf("OG_printf: %%");
	printf(" | Size: %d\n\n", size2);

	return (0);
}
