/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coskelet <coskelet@il-c2.msk.21-school.ru> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 15:26:29 by coskelet          #+#    #+#             */
/*   Updated: 2021/10/20 19:41:48 by coskelet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		parse_int(char *pos, short sign);
static char		*find_fin(char *pos, char **fin_pos);
static char		*pass_space(const char *str, char *pos);
static short	pass_sign(char **pos);

int	ft_atoi(const char *str)
{
	char	*pos;
	short	sign;

	if (ft_strlen(str) == 0)
		return (0);
	pos = (char *)str;
	pos = pass_space(str, pos);
	if (NULL == pos)
		return (0);
	sign = pass_sign(&pos);
	if (0 == sign)
		return (0);
	return (parse_int(pos, sign));
}

static int	parse_int(char *pos, short sign)
{
	char	*fin_pos;
	int		res;
	int		base;

	fin_pos = pos;
	if (!find_fin(pos, &fin_pos))
		return (0);
	res = 1;
	base = 1;
	while (fin_pos - pos > res)
	{
		base *= 10;
		res++;
	}
	res = (*pos - '0') * sign * base;
	base /= 10;
	while (++pos < fin_pos)
	{
		res += (*pos - '0') * sign * base;
		base /= 10;
	}
	return (res);
}

static char	*find_fin(char *pos, char **fin_pos)
{
	*fin_pos = pos;
	while (ft_isdigit(**fin_pos))
		(*fin_pos)++;
	if (*fin_pos == pos)
		return (NULL);
	return (*fin_pos);
}

static char	*pass_space(const char *str, char *pos)
{
	pos = (char *)str;
	while (1)
	{
		if ('+' == *pos || '-' == *pos || ft_isdigit(*pos))
			return (pos);
		else if (' ' == *pos || '\t' == *pos || '\n' == *pos || '\v' == *pos)
			pos++;
		else if (' ' == *pos || '\f' == *pos || '\r' == *pos)
			pos++;
		else
			return (NULL);
	}
}

static short	pass_sign(char **pos)
{
	if (ft_isdigit(**pos))
		return (1);
	if (!ft_isdigit(*((*pos) + 1)))
		return (0);
	if ('+' == **pos)
	{
		(*pos)++;
		return (1);
	}
	if ('-' == **pos)
	{
		(*pos)++;
		return (-1);
	}
	else
		return (0);
}
