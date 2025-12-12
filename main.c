/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbouidd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 21:45:56 by ilbouidd          #+#    #+#             */
/*   Updated: 2025/12/12 02:54:32 by ilbouidd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main()
{
	ft_printf("%d\n", ft_isdigit(-647454));
	return (0);
}

// int main(int ac, char **av)
// {
//     (void)ac;
//     ft_printf("test is_numbers: %d\n", ft_errors(av[1]));
//     ft_printf("test ft_atoi_limits: %d\n", ft_atoi_limits(av[1]));
//     return (0);
// }

// int	main(int ac, char **av)
// {
// 	int		*tab;
// 	t_stack	*stack_a;

// 	if (ac < 2)
// 		return (0);
// 	stack_a = NULL;
// 	tab = create_tab(ac, av);
// 	if (!tab)
// 		return (-1);
// 	stack_a = create_stack(stack_a, tab, ac);
// 	if (!stack_a)
// 		return (-1);
// 	print_list(stack_a);
// 	ft_stackclear(stack_a);
// 	return (0);
// }

// int	main(int ac, char **av)
// {
// 	int i;
// 	t_stack *head;
// 	t_stack *node1;
// 	t_stack *node2;

//     if (ac < 2)
//         return (0);
//     i = 1;
//     while (av[i])
//     {
//         if (ft_errors(av[i++]) == -1)
//             return (-1);
//     }
//     i = 0;
// 	head = create_node(ft_atoi_limits(av[1]));
// 	node1 = create_node(ft_atoi_limits(av[2]));
// 	node2 = create_node(ft_atoi_limits(av[3]));
// 	ft_stackadd_back(head, node1);
// 	ft_stackadd_back(head, node2);
// 	print_list(head);
// 	return (0);
// }