/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   send_max.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-sal <hait-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 10:59:44 by hait-sal          #+#    #+#             */
/*   Updated: 2023/05/21 14:10:22 by hait-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	max_value(t_data *data)
{
	int	max;
	int	i;
	int	j;

	max = data->stack_b[0];
	i = 0;
	while (i < data->b_cnt)
	{
		j = 0;
		while (j < data->b_cnt)
		{
			if ((data->stack_b[i] > max) && i != j)
				max = data->stack_b[i];
			j++;
		}
		i++;
	}
	return (max);
}

int	max_index(t_data *data, int max_v)
{
	int	max;
	int	max_ndx;
	int	i;

	max = 0;
	i = 0;
	while (i < data->b_cnt)
	{
		if (data->stack_b[i] == max_v)
			return (i);
		i++;
	}
	return (max_ndx);
}

void	send_max(t_data *data)
{
	int	max_ndx;
	int	half_ndx;
	int	max_v;

	while (data->b_cnt)
	{
		max_v = max_value(data);
		max_ndx = max_index(data, max_v);
		half_ndx = data->b_cnt / 2;
		send_max_p2(data, &max_ndx, &half_ndx);
	}
}

void	send_max_p2(t_data *data, int *max_ndx, int *half_ndx)
{
	int	size;

	if ((*max_ndx) >= (*half_ndx))
	{
		size = data->b_cnt;
		while (size > (*max_ndx))
		{
			rrb(data);
			size--;
		}
	}
	else if ((*max_ndx) < (*half_ndx))
	{
		size = 0;
		while (size < (*max_ndx))
		{
			rb(data);
			size++;
		}
	}
	pa(data);
}
