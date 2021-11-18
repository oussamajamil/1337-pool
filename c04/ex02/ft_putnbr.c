/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 14:55:40 by ojamil            #+#    #+#             */
/*   Updated: 2021/10/04 11:03:04 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648 )
	{
		write (1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		nb = nb * -1;
		ft_putstr('-');
	}
	if (nb < 10)
	{
		ft_putstr(nb + 48);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putstr(nb % 10 + 48);
	}
}
/*int main ()
{
	ft_putnbr(-222355);
	return 0;
}*/
