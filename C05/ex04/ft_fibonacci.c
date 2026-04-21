/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 11:00:16 by clferrei          #+#    #+#             */
/*   Updated: 2026/02/18 11:56:23 by clferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index -1) + ft_fibonacci(index -2));
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
	if (argc < 2)
		return (0);
	printf("%d", ft_fibonacci(ft_atoi(argv[1])));
	return (0);
}*/
