/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 10:23:48 by digoncal          #+#    #+#             */
/*   Updated: 2022/11/29 14:09:54 by digoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

/*------------- Functions ---------------*/

int	ft_printf(const char *str, ...);
int	count_unbr(unsigned int nbr);

int	print_hex(unsigned int nbr, int uplow);
int print_unbr(unsigned int nbr);
int	print_nbr(int nbr);

#endif
