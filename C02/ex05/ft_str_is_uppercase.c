/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 08:25:02 by clferrei          #+#    #+#             */
/*   Updated: 2026/02/09 09:27:53 by clferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 'A' && *str <= 'Z'))
			return (0);
		str++;
	}
	return (1);
}
/*
int main(void)
{
    char    str[30] = {"KJHGJGKJDHF"};
    char    str2[30] = {"jhAAAKhbjGUg"};
	char	str3[30] = {""};

    ft_str_is_uppercase(str);
    ft_str_is_uppercase(str2);
    printf("str returns: %d\n", ft_str_is_uppercase(str));
    printf("str2 returns: %d\n", ft_str_is_uppercase(str2));
	printf("str3 returns: %d\n", ft_str_is_uppercase(str3));
}*/
