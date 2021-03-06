/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 14:57:09 by ojamil            #+#    #+#             */
/*   Updated: 2021/10/05 15:57:58 by ojamil           ###   ########.fr       */
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
/*int main ()
{
	printf("%d", ft_is_prime(2));
	return (0);
}*/
