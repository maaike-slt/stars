/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 10:13:19 by adelille          #+#    #+#             */
/*   Updated: 2023/04/09 10:50:08 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>

size_t	what_tree_now(const uint8_t *tree_row, size_t size);

int	main(void)
{
	uint8_t	tree_row[9];
	bool	res;

	res = false;
	tree_row[0] = 2;
	tree_row[1] = 3;
	tree_row[2] = 4;
	tree_row[3] = 2;
	tree_row[4] = 5;
	tree_row[5] = 1;
	tree_row[6] = 2;
	tree_row[7] = 6;
	res |= what_tree_now(tree_row, 8) != 5;
	tree_row[0] = 5;
	tree_row[1] = 5;
	tree_row[2] = 5;
	tree_row[3] = 5;
	res |= what_tree_now(tree_row, 4) != 1;
	tree_row[0] = 42;
	res |= what_tree_now(tree_row, 1) != 1;
	res |= what_tree_now(tree_row, 0) != 0;
	tree_row[1] = 21;
	res |= what_tree_now(tree_row, 2) != 1;
	return (res);
}
