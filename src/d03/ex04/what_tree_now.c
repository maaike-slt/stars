/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   what_tree_now.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 17:55:56 by msloot            #+#    #+#             */
/*   Updated: 2023/04/10 18:16:18 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include <stddef.h>

#include <unistd.h>

size_t	what_tree_now(const uint8_t *tree_row, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		i++;
	}
	return (0);
}

void	print_tree_h(uint8_t h)
{
	char	c;

	c = h - 'o';
	write(1, &c, 1);
	write(1, " ", 1);
}
