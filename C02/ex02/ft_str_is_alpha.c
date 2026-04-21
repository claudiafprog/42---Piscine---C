/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 12:33:22 by clferrei          #+#    #+#             */
/*   Updated: 2026/02/09 09:21:57 by clferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if (!((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z')))
			return (0);
		str++;
	}
	return (1);
}
/*int main()
{
    char str[30] = {"amanha 3 da manha!!!!"};
    char str_a[20] = {"amanhademanha"};
	char	str_b[10] = {""};

    printf("str: %d\n", ft_str_is_alpha(str));
    printf("str_a: %d\n", ft_str_is_alpha(str_a));
	printf("str_b: %d\n", ft_str_is_alpha(str_b));
}*/
