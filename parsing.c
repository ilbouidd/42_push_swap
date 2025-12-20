/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbouidd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 21:50:17 by ilbouidd          #+#    #+#             */
/*   Updated: 2025/12/20 11:54:40 by ilbouidd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int is_double(char **av, int i, int nb)
{
	i = i + 1;
    while(av[i])
    {
		if (nb == ft_atoi(av[i]))
			return (-1);
		i++;
    }
	return (0);
}

int	ft_errors(char **av)
{
	int	i;
	long nb;
	int	j;

	i = 1;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			if (ft_isdigit(av[i][j]) == 0)
				return (-1);
			j++;
		}
		nb = ft_atoi_limits(av[i]);
		if (nb > 2147483647 || nb < -2147483648)
			return (-1);
		if (is_double(av, i, nb) == -1)
			return (-1);
		i++;
		}
	return (0);
}
