/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ql-eilde <ql-eilde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/26 19:25:16 by ql-eilde          #+#    #+#             */
/*   Updated: 2015/01/26 20:06:08 by ql-eilde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int		*ft_char_to_int(int argc, char **argv)
{
	int		*a;
	int		i;
	int		j;

	i = 0;
	j = 1;
	a = (int *)malloc(sizeof(a) * argc);
	while (argv[j] != NULL)
	{
		a[i] = ft_atoi(argv[j]);
		ft_putnbr(a[i]), ft_putchar('\n');
		j++;
		i++;
	}
	return (a);
}

void	ft_error(char **str)
{
	return ;
}

void	ft_push_swap(int *tab)
{

}

int		main(int argc, char **argv)
{
	int		*a;

//	ft_error(argv);
	a = ft_char_to_int(argc, argv);
//	ft_push_swap(a);
	return (0);
}
