/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 14:55:05 by ojamil            #+#    #+#             */
/*   Updated: 2021/10/07 08:54:24 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
	write (1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	l;

	l = argc - 1;
	if (argc > 1)
	{
		while (l >= 1)
		{
			ft_putstr(argv[l]);
			l--;
		}
	}
}
