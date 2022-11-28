/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 11:39:47 by digoncal          #+#    #+#             */
/*   Updated: 2022/11/28 10:32:02 by digoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include <stdio.h>

int	main(void)
{
	char	var = 'X';

	ft_printf("ft_printf: %c\n", var);
	printf("printf: %c\n", var);
	
	return (0);
}
