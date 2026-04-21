/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 08:26:20 by clferrei          #+#    #+#             */
/*   Updated: 2026/02/18 11:54:19 by clferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
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
	int	print;

	i = argc;
	if (argc < 2)
		return (1);
	print = ft_atoi(argv[1]);
	printf("%d", ft_recursive_factorial(print));
	return (0);
}*/
