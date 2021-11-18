/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 08:33:27 by ojamil            #+#    #+#             */
/*   Updated: 2021/09/29 11:51:35 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char c)
{
	write (1, &c, 1);
}

void	ft_hexa(unsigned char c)
{
	char	*p;

	p = "0123456789abcdef";
	write (1, "\\", 1);
	ft_putstr(p[c / 16]);
	ft_putstr(p[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
			ft_hexa(str[i]);
		else
			ft_putstr(str[i]);
		i++;
	}
}
/*int	main()
{
`	ft_putstr_non_printable("Coucou\xfftu vas bien ?");
	return (0);
}*/
