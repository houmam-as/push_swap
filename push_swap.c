/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-sal <hait-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 19:45:17 by hait-sal          #+#    #+#             */
/*   Updated: 2023/05/16 20:18:04 by hait-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	char	**args_joined;
	t_data	data;

	args_joined = ft_split(args_join(argc, argv), ' ');
	check_errors(argc, args_joined);
	data.a_cnt = args_count(args_joined);
	data.b_cnt = 0;
	data.stack_a = get_list(args_joined);
	data.stack_b = malloc(sizeof(int) * args_count(args_joined));
	ra(&data);
	// printf("%d\n", data.stack_a[0]);
	// printf("%d\n", data.stack_a[1]);
	// printf("%d\n", data.stack_a[2]);
	// printf("%d\n", data.stack_a[3]);
	// printf("%d\n", data.stack_a[1]);
}
	// pb(&data, args_joined);
	// printf("-----------\n");
	// pa(&data, args_joined);
	// printf("-----------\n");
	// pa(&data, args_joined);
	// printf("%d\n", data.stack2[0]);
	// printf("%d\n", data.stack2[1]);
	// printf("%d\n", data.stack1[1]);
	// int 	i = 0;
	// while (i < get_size(args_joined))
	// 	printf("%d\n", stack1[i++]);
