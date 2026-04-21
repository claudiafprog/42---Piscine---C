/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 08:15:28 by clferrei          #+#    #+#             */
/*   Updated: 2026/02/09 09:25:38 by clferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 'a' && *str <= 'z'))
			return (0);
		str++;
	}
	return (1);
}
/*
int	main(void)
{
	char	str[30] = {"bvvnbjfvb"};
	char	str2[30] = {"jhAAAKhbjGUg"};
	char	str3[30] = {""};

	ft_str_is_lowercase(str);
	ft_str_is_lowercase(str2);
	printf("str returns: %d\n", ft_str_is_lowercase(str));
	printf("str2 returns: %d\n", ft_str_is_lowercase(str2));
	printf("str3 returns: %d\n", ft_str_is_lowercase(str3));
}*/
