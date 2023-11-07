/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 09:47:09 by tpotilli@st       #+#    #+#             */
/*   Updated: 2023/01/17 14:30:57 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdio.h>
# include <stdint.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int					ft_putchar(char c);
void				ft_putnbr_base(unsigned int nbr, const char format);
int					ft_putstr(char *s);
int					ft_putnbr(int nbr);
int					ft_printf(const char *str, ...);
int					ft_strlen(char *str);
int					ft_count_base(unsigned int nbr);
int					ft_count(int nbr);
int					ft_putnbr_unsigned(unsigned int nbr);
int					ft_unsigned_count(unsigned int nbr);
int					ft_count_help(unsigned long long nbr, int cpt);
int					ft_ptr_len(uintptr_t num);
void				ft_put_ptr(uintptr_t num);
int					ft_print_ptr(unsigned long long ptr);
char				*ft_itoa(int n);
int					ft_print_hex(unsigned int nbr, const char format);

#endif