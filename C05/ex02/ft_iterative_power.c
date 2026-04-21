/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_interactive_power.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 09:41:41 by clferrei          #+#    #+#             */
/*   Updated: 2026/02/18 11:50:51 by clferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = 1;
	result = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i <= power)
	{
		result = result * nb;
		i++;
	}
	return (result);
}
/*
int	ft_atoi(char *str)
{
	int	atoi;

	atoi = 0;
	while (*str >= '0' && *str <= '9')
	{
		atoi = atoi * 10 + (*str - '0');
		str++;
	}
	return (atoi);
}

int	main(int argc, char **argv)
{
	int	i;

	i = argc;
	if (argc < 3)
		return (1);
	printf("%d", ft_iterative_power(ft_atoi(argv[1]), ft_atoi(argv[2])));
	return (0);
}*/
