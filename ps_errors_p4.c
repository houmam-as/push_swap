/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_errors_p4.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-sal <hait-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 13:02:27 by hait-sal          #+#    #+#             */
/*   Updated: 2023/05/20 22:37:47 by hait-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	size_t	slen1;
	size_t	slen2;

	slen1 = ft_strlen(s1);
	slen2 = ft_strlen(s2);
	p = malloc(slen1 + slen2 + 1);
	if (!p)
		return (NULL);
	ft_memmove(p, s1, slen1);
	ft_memmove(p + slen1, s2, slen2 + 1);
	free((char *)s1);
	return (p);
}

char	*ft_strdup(const char *s1)
{
	char	*p;
	size_t	slen;

	slen = ft_strlen(s1);
	p = malloc ((slen + 1) * sizeof(char));
	if (!p)
		return (NULL);
	ft_memmove(p, s1, slen + 1);
	return (p);
}

int	args_count(char **args)
{
	int	i;

	i = 0;
	while (args[i])
		i++;
	return (i);
}

//check if any elements is repeated
//array of int does not have a \0 at the end
int	check_repeated_p1(char **args)
{
	int	*nums;
	int	i;

	nums = malloc(sizeof(int *) * args_count(args));
	i = 0;
	while (args[i])
	{
		nums[i] = (int)ft_atoi(args[i]);
		i++;
	}
	if (check_repeated_p2(nums, args) != 0)
	{
		free (nums);
		return (1);
	}
	free (nums);
	return (0);
}

int	check_repeated_p2(int *nums, char **args)
{
	int	i;
	int	j;
	int	rep;

	i = 0;
	while (args[i])
	{
		j = 0;
		rep = 0;
		while (j < args_count(args))
		{
			if ((int)ft_atoi(args[i]) == nums[j])
				rep++;
			if (rep > 1)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
