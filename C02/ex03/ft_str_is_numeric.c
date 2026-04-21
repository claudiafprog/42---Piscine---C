/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 07:35:52 by clferrei          #+#    #+#             */
/*   Updated: 2026/02/09 09:24:34 by clferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= '0' && *str <= '9'))
			return (0);
		str++;
	}
	return (1);
}
/*
int	main(void)
{
	char	str[30] = {"726476254870"};
	char	str2[30] = {"hgvy87h ..vn8"};
	char	str3[30]= {""};

	ft_str_is_numeric(str);
	ft_str_is_numeric(str2);
	printf("str returns:%d\n", ft_str_is_numeric(str));
	printf("str2 returns: %d\n", ft_str_is_numeric(str2));
	printf("str3 returns: %d\n", ft_str_is_numeric(str3));
	return (0);
}*/
