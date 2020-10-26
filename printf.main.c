/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartins <pmartins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/16 13:23:17 by pmartins          #+#    #+#             */
/*   Updated: 2020/10/26 19:06:44 by pmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./src/ft_printf.h"
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_printf(const char *fmt, ...);
void			ft_putnbr(int nb);
void			ft_putchar(char c);
void			ft_putstr(char *s);




int main()
{
	int 			return_printf= 0;
	int 			return_ft_printf= 0;
//	unsigned int 	numero = 13;
	int				nbr = 67890;
//	unsigned int 	hexa = 12;
//	char 			bob[] = "won";
	char 			nan[] = "12345";
	char 			jan[] ="12345";
	char 			limit[] ="help";
	char 			h = 'h';
	int				duo = 12345;
//	char 			*test = "teste";
		      return_printf = printf("%-12c%-c%-c%-c%-c%-c\n",h,h,h,h,h,h);
	    return_ft_printf = ft_printf("%-12c%-c%-c%-c%-c%-c\n",h,h,h,h,h,h);
	printf("...return_printf:%i\n", return_printf);
	printf("return_ft_printf:%i\n", return_ft_printf);
	      return_printf = printf("%s%%%%%%%-s%-s%-i%c%c\n",nan,jan,limit,nbr,h,h);
	return_ft_printf = ft_printf("%s%%%%%%%-s%-s%-i%c%c\n",nan,jan,limit,nbr,h,h);
	printf("...return_printf:%i\n", return_printf);
	printf("return_ft_printf:%i\n", return_ft_printf);
	      return_printf = printf("%%12345%s%-s%-s%-i%c%c%c%c%c%c%c%c\n",nan,jan,limit,nbr,h,h,h,h,h,h,h,h);
	return_ft_printf = ft_printf("%%12345%s%-s%-s%-i%c%c%c%c%c%c%c%c\n",nan,jan,limit,nbr,h,h,h,h,h,h,h,h);
	printf("...return_printf:%i\n", return_printf);
	printf("return_ft_printf:%i\n", return_ft_printf);
		      return_printf = printf("%12c%-c%-c%-c%-c%-c\n",h,h,h,h,h,h);
	    return_ft_printf = ft_printf("%12c%-c%-c%-c%-c%-c\n",h,h,h,h,h,h);
	printf("...return_printf:%i\n", return_printf);
	printf("return_ft_printf:%i\n", return_ft_printf);
/*	      return_printf = printf("%-c%c%-c--%-i.%-i.%-i123----.%s123-%%%%%%456789%%%%123456789%-s.%-s.%-i.%-c.%-p.%-u.%-x.%-X.%-x.%X..%-x.%-X.%c\n",h,h,h,duo,nbr, nbr, nan,jan,limit,nbr,h,&test, numero, hexa, hexa,  hexa, hexa ,hexa, hexa,h);
	return_ft_printf = ft_printf("%-c%c%-c--%-i.%-i.%-i123----.%s123-%%%%%%456789%%%%123456789%-s.%-s.%-i.%-c.%-p.%-u.%-x.%-X.%-x.%X..%-x.%-X.%c\n",h,h,h,duo,nbr, nbr,nan,jan,limit,nbr,h,&test, numero, hexa, hexa,  hexa, hexa , hexa, hexa,h);
	printf("...return_printf:%i\n", return_printf);
	printf("return_ft_printf:%i\n", return_ft_printf);
	      return_printf = printf("%-c%-c%-c%-i111.%-i.%-i.%-s%-s.%-s.%-i.%-c.%-p.%-u.%-x.%-X.%-x.%X..%-x.%-X.%-c\n",h,h,h,duo,nbr, nbr, nan,jan,limit,nbr,h,&test, numero, hexa, hexa,  hexa, hexa ,hexa, hexa,h);
	return_ft_printf = ft_printf("%-c%-c%-c%-i111.%-i.%-i.%-s%-s.%-s.%-i.%-c.%-p.%-u.%-x.%-X.%-x.%X..%-x.%-X.%-c\n",h,h,h,duo,nbr, nbr,nan,jan,limit,nbr,h,&test, numero, hexa, hexa,  hexa, hexa , hexa, hexa,h);
	printf("...return_printf:%i\n", return_printf);
	printf("return_ft_printf:%i\n", return_ft_printf);*/
		      return_printf = printf("%-10i%-i%-i%-i\n",nbr,duo,duo,nbr);
	    return_ft_printf = ft_printf("%-10i%-i%-i%-i\n",nbr,duo,duo,nbr);
	printf("...return_printf:%i\n", return_printf);
	printf("return_ft_printf:%i\n", return_ft_printf);
			      return_printf = printf("%i.%i.\n",duo,nbr);
	  	    return_ft_printf = ft_printf("%i.%i.\n",duo,nbr);
printf("...return_printf:%i\n", return_printf);
	printf("return_ft_printf:%i\n", return_ft_printf);
		      return_printf = printf("12345%c%c%c%c%c%c%c%c\n",h,h,h,h,h,h,h,h);
	    return_ft_printf = ft_printf("12345%c%c%c%c%c%c%c%c\n",h,h,h,h,h,h,h,h);
	printf("...return_printf:%i\n", return_printf);
	printf("return_ft_printf:%i\n", return_ft_printf);
	      return_printf = printf("%%%%%%%%%%%%%s%-s%-s%-i%c%c%c%c%c%c%c%c\n",nan,jan,limit,nbr,h,h,h,h,h,h,h,h);
	return_ft_printf = ft_printf("%%%%%%%%%%%%%s%-s%-s%-i%c%c%c%c%c%c%c%c\n",nan,jan,limit,nbr,h,h,h,h,h,h,h,h);
	printf("...return_printf:%i\n", return_printf);
	printf("return_ft_printf:%i\n", return_ft_printf);
	      return_printf = printf("%s12345%%%%67891s%-s%-s%-i%c%c%c%c%c%c%c%c\n",nan,jan,limit,nbr,h,h,h,h,h,h,h,h);
	return_ft_printf = ft_printf("%s12345%%%%67891s%-s%-s%-i%c%c%c%c%c%c%c%c\n",nan,jan,limit,nbr,h,h,h,h,h,h,h,h);
	printf("...return_printf:%i\n", return_printf);
	printf("return_ft_printf:%i\n", return_ft_printf);
	          return_printf = printf("%%%%%%%%%%12\n");
	    return_ft_printf = ft_printf("%%%%%%%%%%12\n");
	printf("...return_printf:%i\n", return_printf);
	printf("return_ft_printf:%i\n", return_ft_printf);
			  
			//printf("\nthis is the RETURN of ft_printf:%i\n", test);
}

/*int	print_x_noflag( bdr *star)
{
//	printf("\nentrou  no x\n");
	size_t	num;
	char *character;
	num = va_arg(star->list, size_t);
	character = ft_itoa_base(num, 16, 'a');
	star->kpr6= ft_strlen(character);
	ft_putstr(character);
	free(character);
	return(star->kpr6);
}
int	print_X_noflag(bdr *star)
{
	printf("\nentrou  no X\n");
	size_t	num;
	char *character;
	num = va_arg(star->list, size_t);
	character = ft_itoa_base(num, 16, 'A');
	star->kpr7= ft_strlen(character);
	ft_putstr(character);
	free(character);
	return(star->kpr7);
}*/