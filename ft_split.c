/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coskelet <coskelet@il-c2.msk.21-school.ru> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 20:23:31 by coskelet          #+#    #+#             */
/*   Updated: 2021/10/21 21:24:47 by coskelet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**mas;
	short	res;
	size_t	cnt;

	iscnt = 1;
	cnt = 0;
	res = split(s, c, &mas, cnt);
	*mas = (char **)malloc(cnt * sizeof (char **));
	res = split(s, mas, cnt);
	if (res < 0)
	{
		free_mass(mas);
		return (NULL);
	}
	if (res == 0)
		return (mas);
}

short	split(char const *s, char c, char ***mas, size_t cnt)
{
	size_t			start;
	char			*s2;
	static short	iscnt = 1;

	start = 0;
	while (1)
	{
		s2 = ft_strchr(s + start, c);
		if (NULL == s2)
			return (0);
		if (s2 > s + start)
		{
			if (!iscnt)
			{
				s2 = ft_substr(mas, s, start, s2 - (s + start));
				if (NULL == s2)
				{
					free_mas(mas);
					return (NULL);
				}
			}
			cnt++;
		}
		start++;
	}
	iscnt = 0;
}

short	alloc(char ***mas, char const *s, char *s2, size_t start)
{
	char	*str;
	str = ft_substr(s, start, s2 - (s + start));
	if (!str)
	{
		free_mas(*mas);
	}
}