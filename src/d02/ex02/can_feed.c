/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   can_feed.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 15:29:40 by msloot            #+#    #+#             */
/*   Updated: 2023/03/28 21:43:05 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdbool.h>	// you need to include stdbool.h to have bool type

#include "barn.h"	// #include <stdbool.h> is already in the file barn.h
// so no need to include 2 times

bool	can_feed(unsigned int tree, unsigned int pony)
{
	unsigned int	apple;

	apple = special_sum(tree);
	if (apple >= pony)
		return (true);
	else
		return (false);
}
