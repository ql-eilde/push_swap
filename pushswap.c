/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ql-eilde <ql-eilde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/26 19:25:16 by ql-eilde          #+#    #+#             */
/*   Updated: 2015/01/27 20:38:23 by ql-eilde         ###   ########.fr       */
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
	a = (int *)malloc(sizeof(a) * (argc - 1));
	while (argv[j] != NULL)
	{
		a[i] = ft_atoi(argv[j]);
		j++;
		i++;
	}
	return (a);
}

void	ft_error(char **str)
{
	return ;
}

int		ft_isgrowing(int *tab, int argc)
{
	int		i;

	i = 0;
	while (i < (argc - 1))
	{
		if (tab[i] > tab[i + 1])
			i++;
		else
			break ;
	}
	if (i == (argc - 2))
		return (1);
	return (0);
}

void	ft_push_swap(int *a, int argc)
{
	int		*b;
	int		index;
	int		save;
	int		i;

	b = (int *)malloc(sizeof(b) * (argc - 1));
	while (ft_isgrowing(a, argc) != 1 || ft_isgrowing(b, argc) != 1)
	{
		index = (argc - 2);
		i = 0;
		while (index >= 0)
		{
			if (a[index] > a[index - 1])
			{
				save = a[index];
				a[index] = a[index - 1];
				a[index - 1] = save, ft_putstr("sa ");
			}
			else if (a[index] < a[index - 1])
			{
				b[i] = a[index];
				i++, index--, ft_putstr("pb ");
			}
		}
		index = (argc - 2);
		i = 0;
		while (index >= 0)
		{
			if (b[index] > b[index - 1])
			{
				a[i] = b[index];
				i++, index--, ft_putstr("pa ");
			}
			else if (b[index] < b[index - 1])
			{
				save = b[index];
				b[index] = b[index - 1];
				b[index - 1] = save, ft_putstr("sb ");
			}
		}
	}
}

int		main(int argc, char **argv)
{
	int		*a;

//	ft_error(argv);
	a = ft_char_to_int(argc, argv);
	ft_putnbr(ft_isgrowing(a, argc));
//	ft_push_swap(a, argc);
	return (0);
}
