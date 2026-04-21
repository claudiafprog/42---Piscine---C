/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 10:07:38 by clferrei          #+#    #+#             */
/*   Updated: 2026/02/09 08:10:52 by clferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int main(void)
{
    char    src[] = "Don't panic";
    char    dest[100];
    int     i;

    i = 0;
    ft_strncpy(dest, src, 100);
    while (dest[i] != '\0')
        i++;
    printf("String: %s\n", dest);
    printf("Size: %d\n", i);
    return (0);
}*/
