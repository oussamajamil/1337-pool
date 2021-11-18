/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 15:22:44 by ojamil            #+#    #+#             */
/*   Updated: 2021/09/25 08:10:11 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < 100)
	{
		j = i + 1;
		while (j < 100)
		{
			ft_putchar (i / 10 + 48);
			ft_putchar (i % 10 + 48);
			ft_putchar (' ');
			ft_putchar (j / 10 + 48);
			ft_putchar (j % 10 + 48);
			if (i == 98)
				return ;
			ft_putchar (',');
			ft_putchar (' ');
			j++;
		}
		i++;
	}
}
/*int main ()
{
	ft_print_comb2();
	return (0);
}*/
