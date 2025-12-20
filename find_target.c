/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_target.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbouidd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 10:50:43 by ilbouidd          #+#    #+#             */
/*   Updated: 2025/12/20 12:16:23 by ilbouidd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

void    find_target(t_stack *stack_a, t_stack *stack_b)
{
    t_stack *tmp_a;
    t_stack *tmp_b;
    t_stack *target;
    int value_a;

    tmp_a = stack_a;
    while (tmp_a)
    {
        value_a = tmp_a->value;
        target = NULL;
        tmp_b = stack_b;
        while(tmp_b)
        {
            if (tmp_b->value < value_a
                && (target == NULL || tmp_b->value > target->value))
                target = tmp_b;
            tmp_b = tmp_b->next;
        }
        if (target != NULL)
            tmp_a->target = target;
        else
            tmp_a->target = NULL;
        tmp_a = tmp_a->next;
    }
}

void	print_target(t_stack *stack)
{
	t_stack	*tmp;

	tmp = stack;
	while (tmp)
	{
		ft_printf("%d ", tmp->target->value);
		tmp = tmp->next;
	}
    ft_printf("     target lines");
}