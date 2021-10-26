/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coskelet <coskelet@il-c2.msk.21-school.ru> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 21:40:38 by coskelet          #+#    #+#             */
/*   Updated: 2021/10/26 14:35:53 by coskelet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	n;
	size_t	i;
	char	*s1;

	n = ft_strlen(s);
	s1 = (char *) malloc((n + 1) * sizeof (char));
	if (!s1)
		return (NULL);
	i = 0;
	while (*(s + i))
	{
		*(s1 + i) = (*f)(i, *(s + i));
		i++;
	}
	*(s1 + i) = '\0';
	return (s1);
}
