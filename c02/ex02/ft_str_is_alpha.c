/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 10:54:36 by ojamil            #+#    #+#             */
/*   Updated: 2021/09/27 11:41:21 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i ;

	i = 0;
	while (str[i] != '\0' )
	{
		if ((str[i] >= 'a' && str[i] <= 'z'))
			i++;
		else if ((str[i] >= 'A' && str[i] <= 'Z'))
			i++;
		else
			return (0);
	}
	return (1);
}
/*int main ()
{
    char t[200]="helo 1122547757578##%^&^^&oussama ";
    printf("%d", ft_str_is_alpha(t));
    return 0;
}*/
