/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 10:23:48 by digoncal          #+#    #+#             */
/*   Updated: 2022/12/05 11:00:27 by digoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

/*------------- Functions ---------------*/

int	ft_printf(const char *str, ...);

int	print_hex(unsigned int nbr, int uplow);
int	print_unbr(unsigned int nbr);
int	print_nbr(int nbr);
int	print_str(char *str);
int	print_pointer(unsigned long *p);
int	print_adress(unsigned long p);

#endif
