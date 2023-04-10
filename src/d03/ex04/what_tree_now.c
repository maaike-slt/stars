/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   what_tree_now.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 17:55:56 by msloot            #+#    #+#             */
/*   Updated: 2023/04/10 21:08:25 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include <stddef.h>

#include <unistd.h>

void	print_tree_h(uint8_t h)
{
	char	c;

	c = h + '0';
	write(1, &c, 1);
	write(1, " ", 1);
}

size_t	what_tree_now(const uint8_t *tree_row, size_t size)
{
	size_t	i;
	size_t	count;
	uint8_t	h;

	i = 0;
	count = 0;
	h = 0;
	while (i < size)
	{
		if (tree_row[i] > h)
		{
			h = tree_row[i];
			count++;
		}
		print_tree_h(tree_row[i]);
		print_tree_h(h);
		write(1, "\n", 1);
		i++;
	}
	write(1, "\n", 1);
	return (count);
}
