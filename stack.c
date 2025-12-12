/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbouidd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 01:38:11 by ilbouidd          #+#    #+#             */
/*   Updated: 2025/12/12 02:05:32 by ilbouidd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// t_stack	*create_node(int n)
// {
// 	t_stack	*node;

// 	node = malloc(sizeof(t_stack));
// 	if (!node)
// 		return (NULL);
// 	node->value = n;
// 	node->next = NULL;
// 	return (node);
// }

// void	ft_stackadd_back(t_stack *lst, t_stack *new)
// {
// 	t_stack	*tmp;

// 	if (!lst || !new)
// 		return ;
// 	tmp = lst;
// 	while (tmp->next)
// 	{
// 		tmp = tmp->next;
// 	}
// 	tmp->next = new;
// }
int	*create_tab(int ac, char **av)
{
	int	*tab;
	int	i;

	i = 0;
	tab = malloc(sizeof(int) * ac);
	if (!tab)
		return (NULL);
	while (av[i])
	{
		tab[i] = ft_atoi_limits(av[i]);
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

t_stack	*ft_addfront_stack(t_stack *stack, int n)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new->value = n;
	new->next = stack;
	return (new);
}

void	ft_stackclear(t_stack *lst)
{
	t_stack	*tmp;

	if (!lst)
		return ;
	while (lst)
	{
		tmp = lst->next;
		free(lst);
		lst = tmp;
	}
	lst = NULL;
}

t_stack	*create_stack(t_stack *stack, int *tab, int ac)
{
	while (ac != 0)
	{
		stack = ft_addfront_stack(stack, tab[ac - 1]);
		if (stack == NULL)
			return (free(tab), ft_stackclear(stack), NULL);
		ac--;
	}
	return (free(tab), stack);
}

void	print_list(t_stack *lst)
{
	t_stack	*tmp;

	tmp = lst;
	while (tmp)
	{
		ft_printf("%d\n", tmp->value);
		tmp = tmp->next;
	}
}
