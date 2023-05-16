/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-sal <hait-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 12:55:28 by hait-sal          #+#    #+#             */
/*   Updated: 2023/05/16 09:18:08 by hait-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*destination;
	char	*source;
	size_t	i;
	int		c;
	int		m;

	destination = (char *)dst;
	source = (char *)src;
	i = 0;
	c = (int) i;
	m = (int) n;
	c = 0;
	if (destination == (void *)0 && source == (void *)0)
		return (NULL);
	while (c < m)
	{
		*destination = *source;
		destination++;
		source++;
		c++;
	}
	return (dst);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*destination;
	char	*source;

	destination = (char *)dst;
	source = (char *)src;
	if (!destination && !source)
		return (NULL);
	if (dst > src)
	{
		while (len)
		{
			len--;
			destination[len] = source[len];
		}
	}
	else
	{
		ft_memcpy(destination, source, len);
		return (destination);
	}
	return (destination);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*p;
	char		*v;
	long long	y;

	if (start >= ft_strlen(s))
	{
		v = malloc (sizeof(0));
		*v = 0;
		return (v);
	}
	y = len;
	if (len > ft_strlen(s))
		y = ft_strlen(s) - start;
	p = malloc ((y + 1) * sizeof(char));
	if (!p)
		return (NULL);
	ft_memmove(p, s + start, y);
	*(p + y) = 0;
	return (p);
}

size_t	wrd_cntr(char const *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			while (s[i] != c && s[i])
				i++;
			j++;
		}
		else
			i++;
	}
	return (j);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	i;
	size_t	start;
	size_t	len;

	tab = malloc(sizeof(char *) * (wrd_cntr(s, c) + 1));
	if (!tab)
		return (NULL);
	start = 0;
	i = 0;
	while (i < wrd_cntr(s, c))
	{
		len = 0;
		while (s[start] == c && s[start])
			start++;
		while (s[start + len] != c && s[start + len])
			len++;
		tab[i] = ft_substr(s, start, len);
		start = start + len;
		i++;
	}
	tab[i] = 0;
	return (tab);
}
