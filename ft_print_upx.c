/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_upx.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 21:54:54 by gfredes-          #+#    #+#             */
/*   Updated: 2023/02/01 22:57:07 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_upx(unsigned int nb, size_t *len)
{
	char	*hex_base;
	char	hex[42];
	int		i;

	hex_base = "0123456789ABCDEF";
	i = 0;
	if (nb == 0)
	{
		ft_print_c('0', len);
		return ;
	}
	while (nb != 0)
	{
		hex[i] = hex_base[nb % 16];
		nb /= 16;
		i++;
	}
	while (i > 0)
	{
		i--;
		ft_print_c(hex[i], len);
	}
}
