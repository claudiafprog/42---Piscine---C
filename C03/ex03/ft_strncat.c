/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 08:12:36 by clferrei          #+#    #+#             */
/*   Updated: 2026/02/10 08:49:08 by clferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*begin;
	unsigned int	i;
	int				j;

	i = 0;
	j = 0;
	begin = dest;
	while (dest[j] != '\0')
		j++;
	while (i < nb && src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (begin);
}
/*
int	main(void)
{
	char	dest[100] = "Ali ";

	ft_strncat(dest, "Bababababababababababababababababa", 4);
	printf("%s\n", dest);
	return (0);
}*/
