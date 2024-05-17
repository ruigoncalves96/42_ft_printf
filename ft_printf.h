/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randrade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 15:55:54 by randrade          #+#    #+#             */
/*   Updated: 2024/05/17 17:25:15 by randrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h> // DELETE INCLUDE !!!!!!!!!!!! 

// ---------- ft_printf_utils.c ----------

int	ft_strlen(char *str);
char	*ft_strchr(const char *s, int c);

// ---------- ft_putf.c ----------

int	ft_putchar(char c);
int	ft_putstr(char *str);

int	ft_putnbr(int nbr, char *base);

#endif
