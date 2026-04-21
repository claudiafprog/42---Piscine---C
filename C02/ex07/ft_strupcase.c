/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 12:14:43 by clferrei          #+#    #+#             */
/*   Updated: 2026/02/12 07:27:03 by clferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strupcase(char *str)
{
	char	*temp;

	temp = str;
	while (*str != '\0')
	{
		if ((*str >= 'a' && *str <= 'z'))
		{
			*str -= 32;
		}
		str++;
	}
	return (temp);
}
/*
int main(void)
{
	char	str[] = "AbraCadaBra";

	printf("%s\n", str);
	printf("%s\n", ft_strupcase(str));
}*/
