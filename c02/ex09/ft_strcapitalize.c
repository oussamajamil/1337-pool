/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 13:17:21 by ojamil            #+#    #+#             */
/*   Updated: 2021/09/29 11:50:14 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
void	ft_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str [i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_lowercase (str);
	if (str[i] != '\0' && str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] = str[i] - 32;
		i++;
	}
	while (str [i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (! ((str[i - 1] >= 'a' && str[i - 1] <= 'z')
					|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
					|| (str[i - 1] >= '0' && str[i - 1] <= '9')))
			{
				str[i] = str[i] - 32 ;
			}
		}
		i++;
	}
	return (str);
}
/*int main ()
{
	char t[200] ="salut, comMent tu 0as ? 42mots quarante-deux; cinquante+et+un";
	printf("%s",ft_strcapitalize(t));
	return (0);
}*/
