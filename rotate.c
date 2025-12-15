/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbouidd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 22:36:02 by ilbouidd          #+#    #+#             */
/*   Updated: 2025/12/15 14:29:53 by ilbouidd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack *rotate(t_stack *stack)
{
    t_stack *node_first;
    t_stack *node_second;
    t_stack *node_last;

    node_first = stack;
    node_second = node_first->next;
    while (stack->next)
        stack = stack->next;
    node_last = stack;
    node_last->next = node_first;
    node_first->next = NULL;
    node_first = node_second;
    return (node_first);
}

void    rotate_a(t_stack *stack_a)
{
    rotate(stack_a);
    ft_printf("ra\n");
}

void    rotate_b(t_stack *stack_b)
{
    rotate(stack_b);
    ft_printf("rb\n");
}

void    rotate_r(t_stack *stack_a, t_stack  *stack_b)
{
    stack_a = rotate(stack_a);
    stack_b = rotate(stack_b);
    ft_printf("rr\n");
}