/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coskelet <coskelet@il-c2.msk.21-school.ru> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 18:43:36 by coskelet          #+#    #+#             */
/*   Updated: 2021/10/18 18:52:19 by coskelet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s_c;

	if (!s)
		return (NULL);
	s_c = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (*(s_c + i) == (unsigned char)c)
			return (s_c + i);
		i++;
	}
	return (NULL);
}
