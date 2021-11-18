/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 12:02:47 by ojamil            #+#    #+#             */
/*   Updated: 2021/10/05 16:16:23 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_iterative_power(int nb, int power)
{
	int	r;

	r = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	while (power > 0)
	{
		r = r * nb;
		power -- ;
	}
	return (r);
}
/*int main ()
{
	printf("%d" , ft_iterative_power(2,5));
	return (0);
}*/
