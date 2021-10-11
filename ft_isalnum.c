/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft_isalnum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coskelet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 21:24:44 by coskelet          #+#    #+#             */
/*   Updated: 2021/10/11 21:32:16 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	int	res;

	res = ft_isalpha(c);
	if (res != 0)
		return (res);
	res = ft_isdigit(c);
	if (res != 0)
		return (res);
	return (0);
}
