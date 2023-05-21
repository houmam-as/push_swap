/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_p1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-sal <hait-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 09:39:17 by hait-sal          #+#    #+#             */
/*   Updated: 2023/05/21 14:13:56 by hait-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//push to b
void	pb(t_data *data)
{
	int	i;

	if (data->b_cnt == 0)
		data->stack_b[0] = data->stack_a[0];
	else if (data->b_cnt != 0)
	{
		i = data->b_cnt;
		while (i > 0)
		{
			data->stack_b[i] = data->stack_b[i - 1];
			i--;
		}
		data->stack_b[0] = data->stack_a[0];
	}
	data->b_cnt++;
	i = 0;
	while (data->a_cnt > i)
	{
		data->stack_a[i] = data->stack_a[i + 1];
		i++;
	}
	data->a_cnt--;
	write(1, "pb\n", 3);
}

//push to a
void	pa(t_data *data)
{
	int	i;

	if (data->a_cnt == 0)
		data->stack_a[0] = data->stack_b[0];
	else if (data->a_cnt != 0)
	{
		i = data->a_cnt;
		while (i > 0)
		{
			data->stack_a[i] = data->stack_a[i - 1];
			i--;
		}
		data->stack_a[0] = data->stack_b[0];
	}
	data->a_cnt++;
	i = 0;
	while (data->b_cnt > i)
	{
		data->stack_b[i] = data->stack_b[i + 1];
		i++;
	}
	data->b_cnt--;
	write(1, "pa\n", 3);
}

//swap a
void	sa(t_data *data)
{
	int	tmp;

	if (data->a_cnt == 0)
		return ;
	else if (data->a_cnt != 0)
	{
		tmp = data->stack_a[0];
		data->stack_a[0] = data->stack_a[1];
		data->stack_a[1] = tmp;
	}
	if (data->ss_check != 1)
		write(1, "sa\n", 3);
}

//swap b
void	sb(t_data *data)
{
	int	tmp;

	if (data->b_cnt == 0)
		return ;
	else if (data->b_cnt != 0)
	{
		tmp = data->stack_b[0];
		data->stack_b[0] = data->stack_b[1];
		data->stack_b[1] = tmp;
	}
	if (data->ss_check != 1)
		write(1, "sb\n", 3);
}

//swap on both stacks
void	ss(t_data *data)
{
	data->ss_check = 1;
	sa(data);
	sb(data);
	write(1, "ss\n", 3);
}
