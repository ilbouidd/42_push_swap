/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_target.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbouidd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 14:29:53 by ilbouidd          #+#    #+#             */
/*   Updated: 2025/12/18 15:05:44 by ilbouidd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    find_target(t_stack *stack_a, t_stack *stack_b)
{
    t_stack *tmp_a;
    t_stack *tmp_b;
    int value_a;
    int value_b;

    tmp_a = stack_a;
    tmp_b = stack_b;
    
    while (tmp_a)
    {
        value_a = tmp_a->value;
        tmp_a = tmp_a->next;
    }
}