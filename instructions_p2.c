/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_p2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-sal <hait-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 19:42:05 by hait-sal          #+#    #+#             */
/*   Updated: 2023/05/16 20:20:40 by hait-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//first becomes last
void	ra(t_data *data)
{
	int	i;
	int	tmp;
	
	if (data->a_cnt == 0)
		return ;
	else if (data->a_cnt != 0)
	{
		tmp = data->stack_a[0];
		i = 0;
		while (i < data->a_cnt)
		{
			data->stack_a[i] = data->stack_a[i + 1];
			i++;
		}
		data->stack_a[data->a_cnt - 1] = tmp;
	}
}

void	rb(t_data *data)
{
	int	i;
	int	tmp;
	
	if (data->b_cnt == 0)
		return ;
	else if (data->b_cnt != 0)
	{
		tmp = data->stack_b[0];
		i = 0;
		while (i < data->b_cnt)
		{
			data->stack_b[i] = data->stack_b[i + 1];
			i++;
		}
		data->stack_b[data->b_cnt - 1] = tmp;
	}
}

void	rr(t_data *data)
{
	ra(data);
	rb(data);
}