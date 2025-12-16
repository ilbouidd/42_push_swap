/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tri.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbouidd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 12:35:31 by ilbouidd          #+#    #+#             */
/*   Updated: 2025/12/16 16:30:17 by ilbouidd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    push_tree(t_stack **stack_a, t_stack **stack_b)
{
    int i;

    i = 0;
    while (i++ < 3)
        push_b(stack_a, stack_b);
    // if ((*stack_b)->value < (*stack_b)->next->value 
    //     && ((*stack_b)->next->value < (*stack_b)->next->next->value))
    // {
    //     rotate_b(stack_b);
    //     swap_b(stack_b);
    // }
    // if (((*stack_b)->value < (*stack_b)->next->value)
    //     && ((*stack_b)->next->value > (*stack_b)->next->next->value))
    //     rotate_b(stack_b);
    // if (((*stack_b)->value > (*stack_b)->next->value)
    //     && ((*stack_b)->next->value < (*stack_b)->next->next->value))
    //     swap_b(stack_b);
    // if (((*stack_b)->value < (*stack_b)->next->value)
    //     && ((*stack_b)->next->value > (*stack_b)->next->next->value))
    //     reverse_rotate_b(stack_b);
    // if (((*stack_b)->value > (*stack_b)->next->value)
    //     && ((*stack_b)->next->value < (*stack_b)->next->next->value))
    }
