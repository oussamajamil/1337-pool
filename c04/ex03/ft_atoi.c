/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 10:57:12 by ojamil            #+#    #+#             */
/*   Updated: 2021/10/04 15:39:08 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_mois_plus(char *str)
{
	int	i;
	int	cp;

	i = 0;
	cp = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			cp *= -1;
		i++;
	}
	return (cp);
}

int	ft_atoi(char *str)
{
	int	i;
	int	cp;
	int	r;

	i = 0;
	r = 0;
	cp = ft_mois_plus(str);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
		i++;
	while (str [i] == '0')
		i++;
	if (str [i] < '0' || str[i] > '9' )
		return (0);
	while (str [i] >= '0' && str[i] <= '9')
	{
		r = r * 10 + str[i] - 48;
		i++;
	}
	return (r * cp);
}

/*int main ()
{
	printf("%d", ft_atoi("   --457289a97"));
	return (0);
}*/
