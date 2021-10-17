/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coskelet <coskelet@il-c2.msk.21-school.ru> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 20:32:04 by coskelet          #+#    #+#             */
/*   Updated: 2021/10/17 17:47:35 by coskelet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	int	src_len;
	int	dst_len;
	int	size;
	int	pos;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	size = (int)dstsize;
	if (size <= dst_len)
		return (size + src_len);
	if (size <= dst_len + 1)
		return (size - 1 + src_len);
	pos = dst_len;
	while (pos < size && pos < (src_len + dst_len))
	{
		*(dst + pos) = *(src + pos);
		pos++;
	}
	*(dst + pos) = '\0';
	return (dst_len + src_len);
}
