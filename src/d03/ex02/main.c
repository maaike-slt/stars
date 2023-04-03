/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 10:13:19 by adelille          #+#    #+#             */
/*   Updated: 2023/04/03 18:02:50 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>

size_t	over_42(uint8_t *arr, size_t size);

int	main(void)
{
	uint8_t	arr[9];
	bool	res;

	res = false;
	arr[0] = 0;
	arr[1] = 21;
	arr[2] = 43;
	res |= over_42(arr, 3) != 1;
	arr[2] = 41;
	res |= over_42(arr, 3) != 0;
	arr[2] = 42;
	res |= over_42(arr, 3) != 0;
	arr[3] = 84;
	res |= over_42(arr, 4) != 1;
	arr[0] = 84;
	res |= over_42(arr, 1) != 1;
	res |= over_42(arr, 0) != 0;
	return (res);
}
