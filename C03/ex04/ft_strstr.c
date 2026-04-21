/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 08:44:28 by clferrei          #+#    #+#             */
/*   Updated: 2026/02/11 11:51:05 by clferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j] != '\0')
		{
			if (to_find[j + 1] == '\0')
				return (str + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	str[100] = "Sunset";
	char	to_find [100] = "set";
	char	to_find1 [100] = "";
	char	to_find2 [100] = "abc";

	ft_strstr(str, to_find);
	printf("Should be ""set"": %s\n", ft_strstr(str, to_find));
	printf("Should be ""Sunset"": %s\n", ft_strstr(str, to_find1));
	printf("Should be NULL: %s\n", ft_strstr(str, to_find2));
	return (0);
}*/
