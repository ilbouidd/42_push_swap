/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbouidd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 21:45:56 by ilbouidd          #+#    #+#             */
/*   Updated: 2025/12/18 15:04:18 by ilbouidd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void main_ily(t_stack *stack_a, t_stack *stack_b)
{
    
}

int main(int ac, char **av)
{
    int     *tab;
    t_stack *stack_a;
    t_stack *stack_b;

	stack_a = NULL;
    stack_b = NULL;
    if (ac < 2)
        return (0);
    tab = create_tab(ac - 1, av + 1);
    if (!tab)
        return (-1);
    stack_a = create_stack(stack_a, tab, (ac - 1));
    free(tab);
    if (!stack_a)
        return (-1);
    ft_printf("Avant push:\n");
    print_value(stack_a);
    ft_printf("\nfin stack a\n");
    print_value(stack_b);
    ft_printf("fin stack b\n");
    tri_three(&stack_a,&stack_b);
    put_index(&stack_a, &stack_b);
    ft_printf("Apres push:\n");
    print_value(stack_a);
    ft_printf("\n");
    print_index(stack_a);
    ft_printf("\nfin stack a\n");
    print_value(stack_b);
    ft_printf("\n");
    print_index(stack_b);
    ft_printf("\nfin stack b\n");
    return (0);
}

// int main(){
//     int a;
//     long b = 2147483698798748;
//     a = b;
//     printf("%d",a);
//     return 0;
// }