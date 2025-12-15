/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbouidd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 21:44:50 by ilbouidd          #+#    #+#             */
/*   Updated: 2025/12/15 14:01:09 by ilbouidd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

typedef struct s_stack
{
	int				value;
	struct s_stack	*next;
}					t_stack;

// t_stack				*create_node(int n);
// void					ft_stackadd_back(t_stack *lst, t_stack *new);
void				print_list(t_stack *stack);
int					is_numbers(char *av);
long				ft_atoi_limits(char *str);
int					ft_errors(char *av);
int					*create_tab(int ac, char **av);
t_stack				*ft_addfront_stack(t_stack *stack, int n);
t_stack				*create_stack(t_stack *stack, int *tab, int ac);
void				ft_stackclear(t_stack **lst);
t_stack				*rotate(t_stack *stack);
void				rotate_a(t_stack *stack_a);
void				rotate_b(t_stack *stack_b);
void				rotate_r(t_stack *stack_a, t_stack *stack_b);

#endif