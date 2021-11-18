/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 12:28:08 by ojamil            #+#    #+#             */
/*   Updated: 2021/10/06 09:26:55 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_lenght(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j] || base[i] == '+' || base[i] == '-')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int	l;
	long int	nb;

	l =ft_lenght(base);
	nb = -nbr;
	if (ft_check_base(base) == 0)
		return ;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -1 * nb;
	}
	else
	{
		if (nb < l)
			ft_putchar(base[nb % l]);
		else
		{
			ft_putnbr_base ((nb / l), base);
			ft_putchar (base[nb % l]);
		}
	}
}

int	main(void)
{
	ft_putnbr_base (-10, "0123456789ABCDEF");
	return (0);
}
