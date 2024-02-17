/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csaidi <csaidi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 19:38:07 by csaidi            #+#    #+#             */
/*   Updated: 2023/12/27 19:38:08 by csaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <string.h>

int		ft_check(char s, va_list args, int len);
int		ft_printf(const char *str, ...);
int		ft_putchar(char c, int len);
int		ft_putstr(char *s, int len);
int		ft_putnbr(int c, int len);
int		ft_put_positive(unsigned int c, int len);
int		ft_decimal_to_hex(unsigned long decimal, int len);
int		ft_decimal_to_hexa(unsigned int decimal, int len);
int		ft_put_adress(unsigned long decimal, int len);

#endif
