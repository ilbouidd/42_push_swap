/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbouidd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 22:35:37 by ilbouidd          #+#    #+#             */
/*   Updated: 2025/12/15 20:02:59 by ilbouidd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack *push(t_stack *stack_first, t_stack *stack_second)
{
    stack_first->next = stack_second;
    stack_second->next = stack_second->next->next;
    print_list(stack_second);
    return(stack_second);
}