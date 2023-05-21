/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-sal <hait-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 12:33:15 by hait-sal          #+#    #+#             */
/*   Updated: 2023/05/21 14:11:28 by hait-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	min_stack1(t_data *data)
{
	int	i;
	int	min;

	i = 0;
	min = data->stack_a[0];
	while (i < data->a_cnt)
	{
		if (data->stack_a[i] < min)
			min = data->stack_a[i];
		i++;
	}
	return (min);
}

void	sort_two(t_data *data)
{
	if (data->stack_a[0] > data->stack_a[1])
		sa(data);
}

void	sort_three(t_data *data)
{
	if ((data->stack_a[0] > data->stack_a[1])
		&& (data->stack_a[2] > data->stack_a[0]))
		sa(data);
	if ((data->stack_a[0] > data->stack_a[1])
		&& (data->stack_a[1] > data->stack_a[2]))
	{
		sa(data);
		rra(data);
	}
	if ((data->stack_a[0] > data->stack_a[2])
		&& (data->stack_a[2] > data->stack_a[1]))
		ra(data);
	if ((data->stack_a[1] > data->stack_a[2])
		&& (data->stack_a[2] > data->stack_a[0]))
	{
		sa(data);
		ra(data);
	}
	if ((data->stack_a[1] > data->stack_a[0])
		&& (data->stack_a[0] > data->stack_a[2]))
		rra(data);
}

void	sort_four(t_data *data)
{
	int	cnt;

	cnt = 0;
	while (cnt < 1)
	{
		if (data->stack_a[0] == min_stack1(data))
		{
			pb(data);
			cnt++;
		}
		ra(data);
	}
	sort_three(data);
	pa(data);
}

void	sort_five(t_data *data)
{
	int	cnt;

	cnt = 0;
	while (cnt < 2)
	{
		if (data->stack_a[0] == min_stack1(data))
		{
			pb(data);
			cnt++;
		}
		ra(data);
	}
	sort_three(data);
	pa(data);
	pa(data);
}
