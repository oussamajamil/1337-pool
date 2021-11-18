/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 07:47:37 by ojamil            #+#    #+#             */
/*   Updated: 2021/10/02 09:02:09 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[i] == '\0')
		return (&str[0]);
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] == str[i + j])
		{
			if (to_find[j + 1] == '\0')
			{
				return (&str[i]);
			}
			j++;
		}
		i++;
	}
	return (0);
}
/*int main ()
{
	char t1 [20]= "bonjours oussama";
	char t2[20]="";
	printf ("%s",ft_strstr(t1,t2));
	return (0);
}*/
