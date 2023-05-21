/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-sal <hait-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 19:45:17 by hait-sal          #+#    #+#             */
/*   Updated: 2023/05/21 13:35:12 by hait-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	char	**args_joined;
	t_data	data;
	char	*args_not_splitted;

	args_not_splitted = args_join(argc, argv);
	args_joined = ft_split(args_not_splitted, ' ');
	check_errors(argc, args_joined);
	get_ready(&data, args_joined);
	sort_numbers(&data);
	free_double(args_joined);
	free(args_not_splitted);
}
