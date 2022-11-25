/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 11:39:47 by digoncal          #+#    #+#             */
/*   Updated: 2022/11/25 11:52:28 by digoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/libft/libft.h"
#include <stdio.h>

int	main(void)
{
	int	var = 10;

	ft_printf("ft_printf: %d", var);
	printf("printf: %d", var);
	
	return (0);
}
