/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toantune <toantune@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 18:31:41 by toantune          #+#    #+#             */
/*   Updated: 2023/05/31 18:35:47 by toantune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>
# include <stdarg.h>
# include <ctype.h>

int			ft_printf(const char *format, ...);
void		ft_putchar(int c, int *len);
void		ft_putnbr_base(unsigned int nb, char *base, int *len);
void		ft_putnbr_baseus(unsigned long int nb, char *base, int *len);
void		ft_putnbr(int nbr, int *len);
void		ft_putnbrus(unsigned int nbr, int *len);
void		ft_putstr(char *str, int *len);
size_t		ft_strlen(const char *str);
void		ft_putnbr_base(unsigned int nb, char *base, int *len);

#endif
