/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbouidd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 21:50:17 by ilbouidd          #+#    #+#             */
/*   Updated: 2025/12/12 02:05:57 by ilbouidd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_numbers(char *av)
{
	int	i;

	i = 0;
	while (av[i])
	{
		if (!(av[i] >= '0' && av[i] <= '9'))
			return (-1);
		i++;
	}
	return (0);
}

// int is_double(char **av)
// {
//     int i;
//     int j;

//     i = 0;
//     j = 0;
//     while(av[i])
//     {
//         while (ft_atoi_limits(av[i]) == )
//     }
// }

int	ft_errors(char *av)
{
	if (is_numbers(av) == -1)
		return (-1);
	else if (ft_atoi_limits(av) == -1)
		return (-1);
	else
		return (0);
}
