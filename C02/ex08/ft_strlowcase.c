/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 12:35:36 by clferrei          #+#    #+#             */
/*   Updated: 2026/02/11 17:29:25 by clferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	char	*temp;

	temp = str;
	while (*str != '\0')
	{
		if ((*str >= 'A' && *str <= 'Z'))
		{
			*str += 32;
		}
		str++;
	}
	return (temp);
}
/*
int main(void)
{
    char    str[] = "AbraCadaBra";

    printf("%s\n", str);
    ft_strlowcase(str);
    printf("%s\n", str);
}*/
