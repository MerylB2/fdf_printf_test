/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 19:48:51 by cmetee-b          #+#    #+#             */
/*   Updated: 2025/01/22 16:23:50 by asiatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include "../libft/libft.h"
# include <unistd.h>

int		ft_printf(const char *format, ...);
int		ft_conv_base(char spec, long n, int base);
int		ft_put_adress_ptr(void *ptr);
int		ft_putstr(char *str);
int		ft_putchar(char c);
int		ft_putnbr(int nbr);

#endif
