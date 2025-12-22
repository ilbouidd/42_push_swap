/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tri_all.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbouidd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 11:47:29 by ilbouidd          #+#    #+#             */
/*   Updated: 2025/12/22 13:17:05 by ilbouidd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    tri_all(t_stack **stack_a, t_stack **stack_b)
{
    tri_three(stack_a,stack_b);
    while ((*stack_a))
    {
        put_index(stack_a, stack_b);
        find_target((*stack_a), (*stack_b));
        count_number(stack_a);
        put_first(stack_a, stack_b);
    }
}