/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartins <pmartins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 11:30:46 by pmartins          #+#    #+#             */
/*   Updated: 2020/11/25 17:28:27 by pmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "ft_printf.two.h"

static int			ft_len(long n)
{
	unsigned long int	i;
	long				nb;

	nb = n;
	i = 0;
	if (nb < 0)
	{
		nb = nb * -1;
		i++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

static	char		*ft_iszero(int n)
{
	char	*str;

	if (!(str = ft_calloc(2, sizeof(char))))
		return (NULL);
	if (n == 0)
	{
		str[0] = '0';
		str[1] = '\0';
	}
	return (str);
}

static char			*negative_itoa(int nb, int len)
{
	char		*str;
	long long	n;

	n = nb;
	n = n * -1;
	if (!(str = ft_calloc( len + 1, sizeof(char))))
		return (NULL);
	str[0] = '-';
	str[len] = '\0';
	while (n != '\0')
	{
		str[len - 1] = '0' + (n % 10);
		n = n / 10;
		len--;
	}
	return (str);
}

static	char		*ft_check_itoa(char *str, int n, int len)
{
	len--;
	while (n != '\0')
	{
		str[len] = '0' + (n % 10);
		n = n / 10;
		len--;
	}
	return (str);
}

char				*ft_itoa(long n)
{
	char	*str;
	int		len;
	long	aux;

	len = ft_len(n);
	aux = n;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (!(str = ft_calloc(len + 1, sizeof(char))))
		return (NULL);
	str[len] = '\0';
	if (n == 0)
		return (ft_iszero(n));
	if (aux < 0)
		return (negative_itoa(n, len));
	else
		return (ft_check_itoa(str, n, len));
}

