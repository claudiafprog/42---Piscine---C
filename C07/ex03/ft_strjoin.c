/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 10:43:09 by clferrei          #+#    #+#             */
/*   Updated: 2026/02/23 08:40:34 by clferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_fill_str(char **strs, char *sep, char *joined, int size)
{
	int	i;
	int	j;
	int	x;

	i = 0;
	x = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			joined[x++] = strs[i][j++];
		j = 0;
		while (i < size - 1 && sep[j] != '\0')
			joined[x++] = sep[j++];
		i++;
	}
	joined[x] = '\0';
	return (joined);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*joined;
	char	*empty;
	int		i;
	int		len;

	if (size == 0)
	{
		empty = malloc(1);
		if (!empty)
			return (NULL);
		*empty = '\0';
		return (empty);
	}
	i = 0;
	len = 0;
	while (i < size)
		len = len + ft_strlen(strs[i++]);
	len = len + (ft_strlen(sep) * (size - 1));
	joined = malloc(sizeof(char) * (len + 1));
	if (!joined)
		return (NULL);
	joined = ft_fill_str(strs, sep, joined, size);
	return (joined);
}
/*
int	main(void)
{	
	char	*full;
	char	*strs[5];

	strs[0] = "You are funny ";
	strs[1] = " smart ";
	strs[2] = " brave ";
	strs[3] = " beautiful ";
	strs[4] = " i wish you a nice day!";
	full = ft_strjoin(5, strs, "and");
	if (!full)
		return (1);
	printf("%s\n", full);
	free(full);
	return (0);
}*/
