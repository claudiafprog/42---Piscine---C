/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 09:40:01 by clferrei          #+#    #+#             */
/*   Updated: 2026/02/12 13:38:29 by clferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*
int	main(void)
{
	char	s1[30] = {"Mirror"};
	char	s2[30] = {"Mirror"};
	char	s3[30] = {"Mimi"};

	ft_strcmp(s1, s2);
	ft_strcmp(s1, s3);
	ft_strcmp(s3, s2);
	printf("s1 == s2: %d\n", ft_strcmp(s1, s2));
	printf("s1 > s3: %d\n", ft_strcmp(s1, s3));
	printf("s3 < s2: %d\n", ft_strcmp(s3, s2));
	return (0);
}*/
