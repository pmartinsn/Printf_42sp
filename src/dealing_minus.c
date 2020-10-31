/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dealing_minus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartins <pmartins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 16:41:18 by pmartins          #+#    #+#             */
/*   Updated: 2020/10/30 17:46:16 by pmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	dealing_minus(const char *fmt, int *aux, bdr *star)
{
	char *tobeconv;
	
	tobeconv = malloc(*aux * 3);
	verify_flags_minus(fmt, &*aux, &*star);
	tobeconv = converter( tobeconv, fmt, &*aux);
	if((fmt[*aux] == 'd') | (fmt[*aux] == 'i'))
	{
		*aux = *aux +1;
		ft_print_int_minuswnumb(tobeconv, &*star);
		print_while(fmt, &*aux, &*star);
	}
	else if(fmt[*aux] == 's')
	{
		*aux = *aux +1;
		print_s_minuswnumb(tobeconv, &*star);
		print_while(fmt, &*aux, &*star);
	}
	else if(fmt[*aux] == 'c')
	{
		*aux = *aux +1;
		print_char_minuswnumb(tobeconv, &*star);
		print_while(fmt, &*aux, &*star);
	}
	else dealing_minus_two(tobeconv, fmt, &*aux, &*star);
	free(tobeconv);
}
