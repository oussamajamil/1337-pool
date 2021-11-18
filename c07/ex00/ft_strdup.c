/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 09:41:19 by ojamil            #+#    #+#             */
/*   Updated: 2021/10/12 09:26:30 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	ft_lenght(char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		l;
	char	*copy;

	l = ft_lenght(src);
	i = 0;
	copy = (char *) malloc(l * sizeof(char) + 1 );
	if (copy == 0)
		return (0);
	while (src[i])
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
/*int main ()
{
	printf("%s", ft_strdup("oussama"));
}*/
