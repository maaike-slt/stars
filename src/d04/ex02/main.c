/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 10:13:19 by adelille          #+#    #+#             */
/*   Updated: 2023/04/25 18:14:53 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <stdbool.h>
#include <string.h>

ssize_t	ft_putstr(const char *str);

int	main(int ac, char **av)
{
	bool	res;
	int		i;

	res = false;
	i = 1;
	while (i < ac)
	{
		res |= ft_putstr(av[i]) != (ssize_t)strlen(av[i]);
		i++;
	}
	return (res);
}
