/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 22:54:56 by gfredes-          #+#    #+#             */
/*   Updated: 2023/02/01 22:55:03 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_print_px(unsigned long int nb, size_t *len)
{
	char	*hex_base;
	char	hex[42];
	int		i;

	hex_base = "0123456789abcdef";
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

void	ft_print_p(unsigned long int nb, size_t *len)
{
	ft_print_c('0', len);
	ft_print_c('x', len);
	ft_print_px(nb, len);
}
