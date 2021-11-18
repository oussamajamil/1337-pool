/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 08:56:15 by ojamil            #+#    #+#             */
/*   Updated: 2021/09/25 08:09:58 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_nbr(char i, char j, char k)
{
	write (1, &i, 1);
	write (1, &j, 1);
	write (1, &k, 1);
	if (k == '9' && k - 1 == j && j - 1 == i)
		return ;
	write (1, ",", 1);
	write (1, " ", 1);
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '9')
	{
		b = a + 1;
		while (b <= '9')
		{
			c = b + 1;
			while (c <= '9')
			{
				ft_print_nbr (a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
/*int	main()
{
	ft_print_comb ();
	return (0);
}*/
