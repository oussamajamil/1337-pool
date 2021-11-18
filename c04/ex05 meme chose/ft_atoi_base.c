/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 15:31:02 by ojamil            #+#    #+#             */
/*   Updated: 2021/10/05 10:05:45 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_lenght(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_check_base( char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j] || base[i] == '+' || base[i] == '-')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_index(char *base, char c)
{
	int	i;
	int	r;

	i = 0;
	r = -1;
	while (base[i])
	{
		if (base[i] == c)
		{
			return (i);
		}
		i++;
	}
	return (r);
}

int	mois_plus(char *str)
{
	int	i;
	int	cp;

	i = 0;
	cp = 1;
	while ((str[i] >= 9 && str[i] <= 13 ) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-' )
	{
		if (str[i] == '-')
			cp *= -1;
		i++;
	}	
	return (cp);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	cp;
	int	r;	

	i = 0;
	r = 0;
	if (ft_check_base (base) == 1)
	{
		cp = mois_plus(str);
		while ((str[i] >= 9 && str[i] <= 13 ) || str[i] == 32)
			i++;
		while (str[i] == '+' || str[i] == '-')
			i++;
		while (ft_index(base, str[i]) >= 0)
		{
			r = r * ft_lenght (base) + ft_index(base, str[i]);
			i++;
		}
		if (cp >= 0)
			return (r);
		else
			return (-r);
	}
	return (0);
}
/*int main ()
{
	printf("%d" ,ft_atoi_base("-----++++123456","0123456789"));
	return (0);
}*/
