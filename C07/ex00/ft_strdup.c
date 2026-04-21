/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 14:05:56 by clferrei          #+#    #+#             */
/*   Updated: 2026/02/23 08:03:05 by clferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dup;
	int		len;
	int		i;

	len = 0;
	while (src[len] != '\0')
		len++;
	dup = malloc(sizeof(char) * (len +1));
	if (!dup)
		return (NULL);
	i = 0;
	while (*src != '\0')
	{
		dup[i] = *src;
		src++;
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
/*
int	main(void)
{
	char	str[100] = "This clone was cloned with Malloc";
	char	*dup;

	dup = ft_strdup(str);
	if (!dup)
	{
		printf("Allocation failed");
		return (1);
	}
	printf("Src: %s\n", str);
	printf("Dup: %s\n", dup);
	free(dup);
	return (0);
}*/
