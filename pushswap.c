/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ql-eilde <ql-eilde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/26 19:25:16 by ql-eilde          #+#    #+#             */
/*   Updated: 2015/01/30 12:26:08 by ql-eilde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
#include <stdio.h>

int		*ft_char_to_int(int argc, char **argv)
{
	int		*a;
	int		i;
	int		j;
	int 	k;

	i = 0;
	j = 1;
	k = (argc - 1);
	a = (int *)malloc(sizeof(a) * (argc - 1));
	while (argv[j] != NULL)
	{
		a[i] = ft_atoi(argv[k]);
		j++, i++, k--;
	}
	return (a);
}

void	ft_error(char **str)
{
	(void)str;
	return ;
}

int		ft_isgrowing(int *tab, int argc)
{
	int		i;

	i = 0;
	while (i < (argc - 2))
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
	int 	i;

	b = (int *)malloc(sizeof(b) * (argc - 1));
	while (1)
	{
		if (ft_isgrowing(a, argc) == 1)
			break ;
		index = (argc - 2);
		i = 0;
		while (index >= 0)
		{
			if (((argc - 1) - i) == 1 || a[index] < a[index - 1])
			{
				b[i] = a[index];
				i++, index--, ft_putstr("pb \n");
			}
			else if (a[index] > a[index - 1])
			{
				save = a[index];
				a[index] = a[index - 1];
				a[index - 1] = save, ft_putstr("sa \n");
			}
		}
		if (ft_isgrowing(b, argc) == 1)
			break ;
		index = (argc - 2);
		i = 0;
		while (index >= 0)
		{
			if (((argc - 1) - i) == 1 || b[index] > b[index - 1])
			{
				a[i] = b[index];
				i++, index--, ft_putstr("pa \n");
			}
			else if (b[index] < b[index - 1])
			{
				save = b[index];
				b[index] = b[index - 1];
				b[index - 1] = save, ft_putstr("sb \n");
			}
		}
	}
	printf("%d %d %d %d %d %d %d %d\n", a[0],  a[1], a[2], a[3], a[4], a[5], a[6], a[7]);
}

int		main(int argc, char **argv)
{
	int		*a;

//	ft_error(argv);
	a = ft_char_to_int(argc, argv);
	ft_push_swap(a, argc);
	return (0);
}
