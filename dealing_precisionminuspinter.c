/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dealing_precisionminuspinter.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartins <pmartins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 11:06:49 by pmartins          #+#    #+#             */
/*   Updated: 2020/11/02 14:19:03 by pmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "ft_printf.two.h"

void	ft_print_int_pre(char *tobeconv, t_bdr *star)
{
	int		help;
	int		j;
	char	*character;

	help = 0;
	j = 0;
	j = ft_atoi(tobeconv);
	star->kpr8 = va_arg(star->list, int);
	character = ft_itoa(star->kpr8);
	star->ret__ = ft_strlen(character);
	if (star->ret__ > j)
		j = star->ret__;
	else
		j = j - star->ret__;
	while (help < j)
	{
		ft_putchar('0', &*star);
		help++;
	}
	ft_putnbr(star->kpr8, &*star);
	free(character);
}

void	print_u_pre(char *tobeconv, t_bdr *star)
{
	int		help;
	int		j;
	char	*character;
	size_t	num;

	help = 0;
	j = 0;
	j = ft_atoi(tobeconv);
	num = va_arg(star->list, size_t);
	character = ft_itoa_base(num, 10, 'a');
	star->kpr5 = ft_strlen(character);
	if (star->kpr5 > j)
		j = star->kpr5;
	else
		j = j - star->kpr5;
	while (help < j)
	{
		ft_putchar('0', &*star);
		help++;
	}
	ft_putstr(character, &*star);
	free(character);
}

void	print_x_pre(char *tobeconv, t_bdr *star)
{
	int		help;
	int		j;
	size_t	num;
	char	*character;

	help = 0;
	j = 0;
	j = ft_atoi(tobeconv);
	num = va_arg(star->list, size_t);
	character = ft_itoa_base(num, 16, 'a');
	star->kpr6 = ft_strlen(character);
	if (star->kpr6 > j)
		j = star->kpr6;
	else
		j = j - star->kpr6;
	while (help < j)
	{
		ft_putchar('0', &*star);
		help++;
	}
	ft_putstr(character, &*star);
	free(character);
}

void	print_xx_pre(char *tobeconv, t_bdr *star)
{
	int		help;
	int		j;
	size_t	num;
	char	*character;

	help = 0;
	j = 0;
	j = ft_atoi(tobeconv);
	num = va_arg(star->list, size_t);
	character = ft_itoa_base(num, 16, 'A');
	star->kpr6 = ft_strlen(character);
	if (star->kpr6 > j)
		j = star->kpr6;
	else
		j = j - star->kpr6;
	while (help < j)
	{
		ft_putchar('0', &*star);
		help++;
	}
	ft_putstr(character, &*star);
	free(character);
}

int		find_number_value(char *tobeconv, t_bdr *star)
{
	star->yndex = ft_atoi(tobeconv);
	return (star->yndex);
}
