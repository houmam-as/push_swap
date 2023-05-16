/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-sal <hait-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 20:08:07 by hait-sal          #+#    #+#             */
/*   Updated: 2023/05/16 20:07:07 by hait-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>

/////////////////////////// LIBFT FUNCTIONS ///////////////////////////
char	**ft_split(char const *s, char c);
size_t	wrd_cntr(char const *s, char c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memcpy(void *dst, const void *src, size_t n);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strdup(const char *s1);

////////////////////////////////////////////////////////////////////
///////////////             Errors Check             ///////////////
////////////////////////////////////////////////////////////////////

/************** Is it a number **************/
int		ft_isdigit(char *argv);
int		check_digit(int argc, char **argv);

/************** Is it an integer **************/
int		check_max_int(int argc, char **argv);
long	ft_atoi(const char *str);

/************** Is a number repeated **************/
int		check_repeated_p1(char **argv);
int		check_repeated_p2(int *nums, char **args);
int		args_count(char **args);

/************** Is it a valid argument **************/
int		check_empty_args(int argc, char **argv);
void	ft_putstr(char *s);
size_t	ft_strlen(const char *s);

/************** Is the list sorted **************/
int		check_if_sorted(int argc, char **argv);

/************** Is everything OK **************/
char	*args_join(int argc, char **argv);
void	check_errors(int argc, char **argv);


typedef	struct s_data
{
	// char	**args_joined;
	int		*stack_a;
	int		*stack_b;
	// int		*args_nbr;
	int		a_cnt;
	int		b_cnt;
}	t_data;

int	*get_list(char **args);

////////////////////////////////////////////////////////////////////
///////////////             Instructions             ///////////////
////////////////////////////////////////////////////////////////////
void	pa(t_data *data);
void	pb(t_data *data);
void	sa(t_data *data);
void	sb(t_data *data);
void	ss(t_data *data);
void	ra(t_data *data);
void	rb(t_data *data);
void	rr(t_data *data);

#endif