/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clferrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 09:25:52 by clferrei          #+#    #+#             */
/*   Updated: 2026/02/25 10:15:55 by clferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_strdup(char *str)
{
	char	*dup;
	int		i;
	int		len;

	len = ft_strlen(str);
	dup = malloc(sizeof(char) * (len +1));
	if (!dup)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*structures;
	int			i;

	structures = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!structures)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		structures[i].size = ft_strlen(av[i]);
		structures[i].str = av[i];
		structures[i].copy = ft_strdup(av[i]);
		if (!structures[i].copy)
			return (NULL);
		i++;
	}
	structures[i].size = 0;
	structures[i].str = 0;
	structures[i].copy = 0;
	return (structures);
}
