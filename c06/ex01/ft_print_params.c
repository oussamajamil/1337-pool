/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 13:22:44 by ojamil            #+#    #+#             */
/*   Updated: 2021/10/07 08:58:14 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstrstr(char **str)
{
	int	i;
	int	j;

	i = 1;
	while (str[i])
	{
		j = 0;
		while (str[i][j])
		{
			write (1, &str[i][j], 1);
			j++;
		}
		write (1, "\n", 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		ft_putstrstr(argv);
	}
}
