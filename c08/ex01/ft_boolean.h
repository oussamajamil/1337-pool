/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 16:44:47 by ojamil            #+#    #+#             */
/*   Updated: 2021/10/12 11:52:16 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# include <unistd.h>
# define TRUE	1
# define FALSE	0
# define EVEN(nbr) ((nbr) % 2 == 0)
# define EVEN_MSG	"I have an even number of arguments.\n"
# define ODD_MSG 	"I have an odd number of arguments.\n"
# define SUCCESS 0

typedef int	t_bool;
#endif
