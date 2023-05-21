/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_list.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-sal <hait-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 09:41:20 by hait-sal          #+#    #+#             */
/*   Updated: 2023/05/21 13:34:43 by hait-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//put the splitted args in an array of integers

char	*args_join(int argc, char **argv)
{
	char	*args;
	int		i;

	args = ft_strdup(argv[1]);
	i = 2;
	while (i < argc)
	{
		args = ft_strjoin(args, " ");
		args = ft_strjoin(args, argv[i++]);
	}
	return (args);
}

int	*get_list(char **args)
{
	int	*list;
	int	size;
	int	i;

	size = args_count(args);
	list = malloc(sizeof(int) * size);
	i = 0;
	while (args[i])
	{
		list[i] = (int)ft_atoi(args[i]);
		i++;
	}
	return (list);
}
