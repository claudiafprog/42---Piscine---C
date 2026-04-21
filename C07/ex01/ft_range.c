/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 15:14:08 by clferrei          #+#    #+#             */
/*   Updated: 2026/02/19 08:26:03 by clferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	if (min >= max)
		return (NULL);
	range = malloc(sizeof(int) * (max - min));
	if (!range)
		return (NULL);
	i = 0;
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
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
	int	*range;
	int	i;
	int	min;
	int	max;

	if (argc < 3)
		return (1);
	i = 0;
	min = ft_atoi(argv[1]);
	max = ft_atoi(argv[2]);
	range = (ft_range(min, max));
	if (!range)
	{
		printf("Allocation failed");
		return (1);
	}
	while (i < (max - min))
	{
		printf("%d", range[i]);
		i++;
	}
	free(range);
	return (0);
}*/
