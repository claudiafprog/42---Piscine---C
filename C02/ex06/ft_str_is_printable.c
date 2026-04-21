/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 08:30:24 by clferrei          #+#    #+#             */
/*   Updated: 2026/02/09 08:51:21 by clferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str < 32 || *str > 126)
			return (0);
		str++;
	}
	return (1);
}
/*
int main(void)
{
    char    str[30] = {"H \n yfy \t lkjh \v hljk \xbb iii \x7"};
    char    str2[30] = {"jhAAAKhbjGUg"};
	char	str3[30] = {""};

    ft_str_is_printable(str);
    ft_str_is_printable(str2);
	ft_str_is_printable(str3);
    printf("str returns: %d\n", ft_str_is_printable(str));
    printf("str2 returns: %d\n", ft_str_is_printable(str2));
	printf("str3 returns: %d\n", ft_str_is_printable(str3));
}*/
