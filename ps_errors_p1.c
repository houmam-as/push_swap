/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_errors_p1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-sal <hait-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 20:07:04 by hait-sal          #+#    #+#             */
/*   Updated: 2023/05/21 13:34:21 by hait-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_atoi(const char *str)
{
	long	s;
	long	r;
	int		i;
	int		count;

	s = 1;
	r = 0;
	i = 0;
	ft_atoi_p2(str, &i, &s, &r);
	if (r > 2147483647 || r < -2147483648)
		return (2147483657);
	return (r);
}

void	ft_atoi_p2(const char *str, int *i, long *s, long *r)
{
	int	count;

	count = 0;
	while ((str[*i] < 14 && str[*i] > 8) || str[*i] == 32)
			(*i)++;
	if (str[*i] == '+' || str[*i] == '-')
	{
		if (str[*i] == '-')
			(*s) = (*s) * (-1);
		(*i)++;
	}
	count = 0;
	while (str[*i] >= '0' && str[*i] <= '9')
	{
		(*r) = (*r) * 10 + (str[*i] - 48);
		if ((*r) != 0)
			count++;
		if (count > 10)
			break ;
		(*i)++;
	}
	(*r) = (*r) * (*s);
}

//check if the given numbers is a number or mixed test
int	ft_isdigit(char *argv)
{
	int	i;

	i = 0;
	if (argv[i] == '+' || argv[i] == '-')
		i++;
	while (argv[i])
	{
		if (argv[i] >= '0' && argv[i] <= '9')
			i++;
		else
			return (1);
	}
	return (0);
}

//check if all the given args are numbers or mixed characters
int	check_digit(int argc, char **argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		if (ft_isdigit(argv[i]) != 0)
			return (1);
		i++;
	}
	return (0);
}

//check if the given number is bigger than max_int
int	check_max_int(int argc, char **argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		if (ft_atoi(argv[i]) > 2147483647)
			return (1);
		i++;
	}
	return (0);
}

// while ((str[i] < 14 && str[i] > 8) || str[i] == 32)
// 			i++;
// 	if (str[i] == '+' || str[i] == '-')
// 	{
// 		if (str[i] == '-')
// 			s = s * (-1);
// 		i++;
// 	}
// 	count = 0;
// 	while (str[i] >= '0' && str[i] <= '9')
// 	{
// 		r = r * 10 + (str[i] - 48);
// 		if (r != 0)
// 			count++;
// 		if (count > 10)
// 			break ;
// 		i++;
// 	}
// 	r = r * s;