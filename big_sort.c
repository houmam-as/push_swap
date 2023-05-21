/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-sal <hait-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 17:28:46 by hait-sal          #+#    #+#             */
/*   Updated: 2023/05/21 11:08:25 by hait-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	bubble_sort(t_data *data)
{
	int	i;
	int	tmp;

	data->swap_check = 1;
	while (data->swap_check)
	{
		data->swap_check = 0;
		i = 0;
		while (i < data->a_cnt - 1)
		{
			if (data->fake_a[i] > data->fake_a[i + 1])
			{
				tmp = data->fake_a[i];
				data->fake_a[i] = data->fake_a[i + 1];
				data->fake_a[i + 1] = tmp;
				data->swap_check = 1;
			}
			i++;
		}
	}
}

void	sort_hundred(t_data *data)
{
	int	start;
	int	end;
	int	args;

	start = 0;
	end = 15;
	if (data->a_cnt < 15)
		end = 5;
	args = data->a_cnt;
	while (data->a_cnt)
		sort_hundred_p2(data, &start, &end, args);
}

void	sort_hundred_p2(t_data *data, int *start, int *end, int args)
{
	if (data->stack_a[0] >= data->fake_a[*start]
		&& data->stack_a[0] <= data->fake_a[*end])
	{
		pb(data);
		if (*end < args - 1)
		{
			(*start)++;
			(*end)++;
		}
	}
	else if (data->stack_a[0] < data->fake_a[*start])
	{
		pb(data);
		rb(data);
		if (*end < args - 1)
		{
			(*start)++;
			(*end)++;
		}
	}
	else if (data->stack_a[0] > data->fake_a[*end])
		ra(data);
}

void	sort_five_hundred(t_data *data)
{
	int	start;
	int	end;
	int	args;

	start = 0;
	end = 35;
	args = data->a_cnt;
	while (data->a_cnt)
		sort_hundred_p2(data, &start, &end, args);
}

void	sort_five_hundred_p2(t_data *data, int *start, int *end, int args)
{
	if ((data->stack_a[0] >= data->fake_a[*start])
		&& (data->stack_a[0] <= data->fake_a[*end]))
	{
		pb(data);
		if (*end < args - 1)
		{
			(*start)++;
			(*end)++;
		}
	}
	else if (data->stack_a[0] < data->fake_a[*start])
	{
		pb(data);
		rb(data);
		if (*end < args - 1)
		{
			(*start)++;
			(*end)++;
		}
	}
	else if (data->stack_a[0] > data->fake_a[*end])
		ra(data);
}
