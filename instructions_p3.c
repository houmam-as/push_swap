/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_p3.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-sal <hait-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 08:51:43 by hait-sal          #+#    #+#             */
/*   Updated: 2023/05/21 14:15:16 by hait-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_data *data)
{
	int	i;
	int	tmp;

	if (data->a_cnt == 0)
		return ;
	else if (data->a_cnt != 0)
	{
		tmp = data->stack_a[data->a_cnt - 1];
		i = data->a_cnt - 1;
		while (i > 0)
		{
			data->stack_a[i] = data->stack_a[i - 1];
			i--;
		}
		data->stack_a[0] = tmp;
	}
	if (data->rrr_check != 1)
		write(1, "rra\n", 4);
}

void	rrb(t_data *data)
{
	int	i;
	int	tmp;

	tmp = data->stack_b[data->b_cnt - 1];
	i = data->b_cnt - 1;
	while (i > 0)
	{
		data->stack_b[i] = data->stack_b[i - 1];
		i--;
	}
	data->stack_b[0] = tmp;
	if (data->rrr_check != 1)
		write(1, "rrb\n", 4);
}

void	rrr(t_data *data)
{
	data->rrr_check = 1;
	rra(data);
	rrb(data);
	write(1, "rrr\n", 4);
}
