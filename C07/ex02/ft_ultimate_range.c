/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 08:55:15 by clferrei          #+#    #+#             */
/*   Updated: 2026/02/23 08:09:05 by clferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	*temp;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	temp = malloc(sizeof(int) * (max - min));
	if (!temp)
		return (-1);
	size = 0;
	while (min < max)
	{
		temp[size] = min;
		min++;
		size++;
	}
	*range = temp;
	return (size);
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
	int	size;
	int	*range;
	int	min;
	int	max;
	int	i;

	if (argc < 3)
	{
		printf("Wrong input!");
		return (1);
	}
	min = ft_atoi(argv[1]);
    max = ft_atoi(argv[2]);
	range = NULL;
	size = ft_ultimate_range(&range, min, max);

	if (size <= 0)
	{
		printf("No array created.\n");
		return (1);
	}
	printf("Size of the array-> %d\n", size);
	i = 0;
	printf("Array->");
	while (i < size)
	{
		printf(" %d", range[i]);
		i++;
	}
	printf("\n");
	free(range);
	return (0);
}*/
