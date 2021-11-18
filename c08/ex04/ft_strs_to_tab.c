/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 10:27:33 by ojamil            #+#    #+#             */
/*   Updated: 2021/10/13 09:29:04 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_lenght(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	int		i;
	int		l;
	char	*copy;

	l = ft_lenght(str);
	i = 0;
	copy = (char *) malloc(sizeof(char) * (l + 1));
	if (!copy)
		return (0);
	while (str[i] != '\0')
	{
		copy[i] = str[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*stock_str;

	i = 0;
	if (ac <= 0)
	{
		stock_str = (t_stock_str *) malloc(sizeof(t_stock_str));
		stock_str[i].str = 0;
		return (stock_str);
	}
	else
	{
		stock_str = (t_stock_str *) malloc(sizeof(t_stock_str) * (ac + 1));
		if (!stock_str)
			return (0);
		while (i < ac)
		{
			stock_str[i].size = ft_lenght(av[i]);
			stock_str[i].str = av[i];
			stock_str[i].copy = ft_strdup(av[i]);
			i++;
		}
		stock_str[i].str = 0;
	}
	return (stock_str);
}
