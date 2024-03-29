/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_p2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-sal <hait-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 19:42:05 by hait-sal          #+#    #+#             */
/*   Updated: 2023/05/21 14:14:36 by hait-sal         ###   ########.fr       */
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
	if (data->rr_check != 1)
		write(1, "ra\n", 3);
}

void	rb(t_data *data)
{
	int	i;
	int	tmp;

	tmp = data->stack_b[0];
	i = 0;
	while (i < data->b_cnt)
	{
		data->stack_b[i] = data->stack_b[i + 1];
		i++;
	}
	data->stack_b[data->b_cnt - 1] = tmp;
	if (data->rr_check != 1)
		write(1, "rb\n", 3);
}

void	rr(t_data *data)
{
	data->rr_check = 1;
	ra(data);
	rb(data);
	write(1, "rr\n", 3);
}
