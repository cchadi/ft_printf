/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_adress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csaidi <csaidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 19:37:39 by csaidi            #+#    #+#             */
/*   Updated: 2023/12/27 19:37:40 by csaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_adress(unsigned long decimal, int len)
{
	if (!decimal)
		return (len = ft_putstr("0x0", len));
	len = ft_putstr("0x", len);
	len = ft_decimal_to_hex(decimal, len);
	return (len);
}
