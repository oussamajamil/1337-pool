/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 09:37:45 by ojamil            #+#    #+#             */
/*   Updated: 2021/10/05 16:21:24 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_iterative_factorial(int nb)
{
	int	r;

	r = 1;
	if (nb == 1 || nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (nb > 1)
	{
		r = r * nb;
		nb--;
	}
	return (r);
}
/*int	main()
{
	printf("%d",ft_iterative_factorial(10));
	return (0);
}*/
