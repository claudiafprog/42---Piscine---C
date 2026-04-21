/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 12:44:24 by clferrei          #+#    #+#             */
/*   Updated: 2026/02/09 17:38:17 by clferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	while (*str != '\0')
	{
		if ((*str >= 'A' && *str <= 'Z'))
		{
			*str += 32;
		}
		str++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (i == 0)
		{
			if (str[i] > 'a' && str[i] < 'z')
				str[i] -= 32;
		}
		if (!((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= '0' && str[i] <= '9')))
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] -= 32;
		}
		i++;
	}
	return (str);
}
/*
int main(void)
{
    char    str[] = "oh*holY m4caRRoni+sIs`!!";

    printf("%s\n", str);
    ft_strcapitalize(str);
    printf("%s\n", str);
}*/
