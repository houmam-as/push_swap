/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_errors_p2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-sal <hait-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 10:29:57 by hait-sal          #+#    #+#             */
/*   Updated: 2023/05/21 13:34:35 by hait-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
}

int	check_empty_args(int argc, char **argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		if (ft_strlen(argv[i]) == 0)
			return (1);
		i++;
	}
	return (0);
}

void	check_errors(int argc, char **argv)
{
	if (argc == 1)
		exit (0);
	else if (check_empty_args(argc, argv) != 0)
	{
		write(2, "Error\n", 6);
		exit (1);
	}
	else if (check_digit(argc, argv) != 0)
	{
		write(2, "Error\n", 6);
		exit (1);
	}
	else if (check_max_int(argc, argv) != 0)
	{
		write(2, "Error\n", 6);
		exit (1);
	}
	else if (check_repeated_p1(argv) != 0)
	{
		write(2, "Error\n", 6);
		exit (1);
	}
	else if (check_if_sorted(argc, argv) == 0)
		exit (0);
}

int	check_if_sorted(int argc, char **argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		if (argv[i + 1])
		{
			if ((ft_atoi(argv[i]) > ft_atoi(argv[i + 1])))
				return (1);
		}
		i++;
	}
	return (0);
}
