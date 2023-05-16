/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_numbers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-sal <hait-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 09:41:20 by hait-sal          #+#    #+#             */
/*   Updated: 2023/05/16 10:12:58 by hait-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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