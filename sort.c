/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-sal <hait-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 11:02:07 by hait-sal          #+#    #+#             */
/*   Updated: 2023/05/21 14:10:41 by hait-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_double(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

void	small_sort(t_data *data)
{
	if (data->a_cnt == 2)
		sort_two(data);
	else if (data->a_cnt == 3)
		sort_three(data);
	else if (data->a_cnt == 4)
		sort_four(data);
	else if (data->a_cnt == 5)
		sort_five(data);
}

void	big_sort(t_data *data)
{
	if (data->a_cnt > 5 && data->a_cnt <= 100)
		sort_hundred(data);
	else if (data->a_cnt > 100)
		sort_five_hundred(data);
}

void	sort_numbers(t_data *data)
{
	if (data->a_cnt <= 5)
		small_sort(data);
	else if (data->a_cnt > 5 && data->a_cnt <= 100)
	{
		bubble_sort(data);
		big_sort(data);
	}
	else if (data->a_cnt > 100)
	{
		bubble_sort(data);
		big_sort(data);
	}
	send_max(data);
	free(data->stack_a);
	free(data->stack_b);
}

void	get_ready(t_data *data, char **args_joined)
{
	data->a_cnt = args_count(args_joined);
	data->fake_a_cnt = args_count(args_joined);
	data->b_cnt = 0;
	data->stack_a = get_list(args_joined);
	data->fake_a = get_list(args_joined);
	data->stack_b = malloc(sizeof(int) * args_count(args_joined));
}
