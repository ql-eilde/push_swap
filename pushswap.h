/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ql-eilde <ql-eilde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/26 19:42:59 by ql-eilde          #+#    #+#             */
/*   Updated: 2015/01/27 17:27:12 by ql-eilde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include "libft/libft.h"

int		*ft_char_to_int(int argc, char **argv);
void	ft_error(char **str);
void	ft_push_swap(int *a, int argc);
int		ft_isgrowing(int *tab, int argc);

#endif
