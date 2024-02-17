/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csaidi <csaidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 19:37:59 by csaidi            #+#    #+#             */
/*   Updated: 2023/12/27 19:38:00 by csaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s, int len)
{
	int	i;

	if (!s)
		return (len = ft_putstr("(null)", len));
	i = 0;
	while (s[i])
	{
		len = ft_putchar(s[i], len);
		i++;
	}
	return (len);
}
