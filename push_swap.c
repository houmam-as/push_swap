/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-sal <hait-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 19:45:17 by hait-sal          #+#    #+#             */
/*   Updated: 2023/05/16 09:20:40 by hait-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	char	**joined;

	joined = ft_split(args_join(argc, argv), ' ');
	check_errors(argc, joined);
}

	// int i = 0;
	// while (joined[i])
	// 	printf("%s\n", joined[i++]);