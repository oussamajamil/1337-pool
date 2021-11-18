/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 09:18:21 by ojamil            #+#    #+#             */
/*   Updated: 2021/09/26 10:16:21 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[j] < tab[i])
			{
				temp = tab[j];
				tab[j] = tab[i];
				tab[i] = temp;
			}
			j++;
		}
		i++;
	}
}
/*int main (void)
{
	int i;
	int tab[5]={1,15,0,-1,77};
	for (i = 0; i < 5; i++)
	{
		printf("%d :",tab[i]);
	}
	printf("\n");
	ft_sort_int_tab(tab ,5);
	i = 0;
	for(i = 0 ; i< 5 ; i++)
	{
		printf ("%d",tab[i]);
	}
	printf("\n");

}*/
