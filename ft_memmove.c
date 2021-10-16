/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coskelet <coskelet@il-c2.msk.21-school.ru> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 13:08:06 by coskelet          #+#    #+#             */
/*   Updated: 2021/10/15 13:08:07 by coskelet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	int		i;
	int		s;
	char	*src_c;
	char	*dst_c;

	s = (int)n - 1;
	src_c = (char *)src;
	dst_c = (char *)dst;
	if (src < dst && (src_c + s) >= dst_c)
	{
		while (s >= 0)
		{
			*(dst_c + s) = *(src_c + s);
			s--;
		}
		return (dst);
	}
	i = 0;
	while (i <= s)
	{
		*(dst_c + i) = *(src_c + i);
		i++;
	}
	return (dst);
}
