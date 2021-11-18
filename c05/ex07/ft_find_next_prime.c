/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 15:40:41 by ojamil            #+#    #+#             */
/*   Updated: 2021/10/10 09:38:12 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_is_prime(int nb)
{
	int	i;

	i = 3;
	if (nb == 2)
		return (1);
	if (nb <= 1 || nb % 2 == 0)
		return (0);
	while (i < nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb > 2147483640 && nb <= 2147483647)
		return (2147483647);
	if (nb < 3)
		return (2);
	if (nb % 2 == 0)
		nb++;
	while (nb < 2147483640)
	{
		if (ft_is_prime(nb) == 0)
			nb++;
		if (ft_is_prime(nb) == 1)
			break ;
	}
	return (nb);
}
/*int main ()
{
	printf ("%d",ft_find_next_prime(5009));
	return (0);
}*/
