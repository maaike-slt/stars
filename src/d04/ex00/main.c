/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 10:13:19 by adelille          #+#    #+#             */
/*   Updated: 2023/04/22 16:00:59 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include <stdbool.h>

void	the_answer(uint8_t *ptr);

int	main(void)
{
	uint8_t	n;
	bool	res;

	res = false;
	n = 0;
	the_answer(&n);
	res |= n != 42;
	n = 84;
	the_answer(&n);
	res |= n != 42;
	n = 42;
	the_answer(&n);
	res |= n != 42;
	return (res);
}
