/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 09:58:55 by ojamil            #+#    #+#             */
/*   Updated: 2021/10/11 13:42:51 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_wod_cont_str(char *str)
{
	int i;
	int flage;
	int cp;

	i = 0;
	flage = 0;
	cp = 0;
	while (str[i])
	{
		while (((str[i] >= 9 && str[i] <= 13) || str[i] == 32) && str[i])
		{
			flage = 0;
			i++;
		}
		while ((!((str[i] >= 9 && str[i] <= 13) || str[i] == 32)) && str[i])
		{
			if (flage == 0)
			{
				flage = 1;
				cp += 1;
			}
			i++;
		}
	}
	return (cp);
}
int  ft_nbr_alpha (int pos, char *str)
{
	int cp;

	cp = 0;
	while((!((str[pos] >= 9 && str[pos] <= 13) || str[pos] == 32)) && str[pos])
	{
		pos ++;
		cp ++;
	}
		return (cp);
}

char **ft_split(char *str)
{
	int i;
	char **spl;
	int k;
	int j;
	int pos;

	i = 0;
	k = 0;
	spl = (char **) malloc(sizeof (char **) * (ft_wod_cont_str(str) + 1));
	while (str[i])
	{
		while (((str[i] >= 9 && str[i] <= 13) || str[i] == 32) && str[i])
            i++;
        while ((!((str[i] >= 9 && str[i] <= 13) || str[i] == 32)) && str[i])
        {
			spl[k] = (char *) malloc(sizeof(char *) * (ft_nbr_alpha(i,str) + 1));
			j = 0;
			pos = i;
			while (j < ft_nbr_alpha(i ,str))
			{
				spl[k][j] = str[pos];
				pos ++;
				j++;
			}
			spl[k][j] = '\0';
			k++;
			i = i+ft_nbr_alpha(i,str);
        }}
	spl[k] =NULL;
	return (spl);
}
int main (int argc , char **argv)
{
	int i;
	char **a;
	a = ft_split(argv[1]);
	i = 0;
	while (a[i] != '\0')
	{
		printf("%s\n",a[i]);
		i++;
	}
	free(a);
	return (0);
}
