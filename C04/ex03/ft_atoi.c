/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 14:12:41 by clferrei          #+#    #+#             */
/*   Updated: 2026/02/12 09:55:28 by clferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	nbr;
	int	minus;

	i = 0;
	nbr = 0;
	minus = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			minus++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = nbr * 10 + (str[i] - '0');
		i++;
	}
	if (minus % 2 != 0)
		nbr = -nbr;
	return (nbr);
}
/*
#include <unistd.h>
#include <stdio.h>

int main(void)
{
    char *tests[] = {
        "   42",
        "\t\n\v\f\r42",
        "---42",
        "+-+-42",
        "   +--+",
        "42abc",
        " ---+--+1234ab567",
        "",
        "abc",
        NULL
    };

    int i = 0;
    while (tests[i])
    {
        printf("ft_atoi(\"%s\") = %d\n", tests[i], ft_atoi(tests[i]));
        i++;
    }
    return (0);
}*/
