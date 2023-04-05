/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 10:13:19 by adelille          #+#    #+#             */
/*   Updated: 2023/04/05 16:31:01 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>

size_t	more_duck(uint8_t *duck, size_t size);

int	main(void)
{
	uint8_t	duck[4];
	bool	res;

	res = false;
	duck[0] = 3;
	duck[1] = 5;
	duck[2] = 3;
	duck[3] = 4;
	res |= more_duck(duck, 4) != 2;
	duck[0] = 4;
	duck[1] = 4;
	duck[2] = 5;
	duck[3] = 6;
	res |= more_duck(duck, 4) != 2;
	duck[0] = 42;
	res |= more_duck(duck, 1) != 0;
	res |= more_duck(duck, 0) != 0;
	duck[1] = 21;
	res |= more_duck(duck, 2) != 0;
	return (res);
}
