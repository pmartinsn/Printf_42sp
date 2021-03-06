/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartins <pmartins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 10:44:17 by pmartins          #+#    #+#             */
/*   Updated: 2020/11/25 18:52:10 by pmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "ft_printf.two.h"

static char		*ft_long_number(char *str, t_bdr *star)
{
	int	i;
	
	i = 0;
	if (ft_strlen(str) > 8 && star->conversion != 'p')
		i = ft_strlen(str) - 8;
	while (str[i] == '0' && i < ft_strlen(str) - 1)
		i++;
	return (&str[i]);
}

char			*ft_itoa_base(size_t nb, int base, char updown, t_bdr *star)
{
	int				cont_num;
	size_t			aux;
	char			*str;

	cont_num = 1;
	aux = nb;
	while ((aux = aux / base) > 0)
		cont_num++;
	str = (char *)malloc((cont_num + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[cont_num--] = '\0';
	while (cont_num >= 0)
	{
		if ((nb % base) < 10)
			str[cont_num] = (nb % base) + '0';
		else
			str[cont_num] = (nb % base) + updown - 10;
		nb = nb / base;
		cont_num--;
	}
	return (ft_long_number(str, &*star));
}
