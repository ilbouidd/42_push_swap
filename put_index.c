/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbouidd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 10:41:15 by ilbouidd          #+#    #+#             */
/*   Updated: 2025/12/18 14:22:34 by ilbouidd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_index(t_stack *stack)
{
	t_stack	*tmp;

	tmp = stack;
	while (tmp)
	{
		ft_printf("%d ", tmp->index);
		tmp = tmp->next;
	}
}

void put_index(t_stack **stack_a, t_stack **stack_b)
{
    t_stack *tmp_a;
    t_stack *tmp_b;
    int i;

    tmp_a = (*stack_a);
    tmp_b = (*stack_b);
    i = 0;
    while(tmp_a != NULL)
    {
        tmp_a->index = i;
        tmp_a = tmp_a->next;
        i++;
    }
    i = 0;
    while(tmp_b != NULL)
    {
        tmp_b->index = i;
        tmp_b = tmp_b->next;
        i++;
    }
}
