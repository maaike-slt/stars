/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 10:13:19 by adelille          #+#    #+#             */
/*   Updated: 2023/04/23 15:16:14 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

void	swap(int *a, int *b);

int	main(void)
{
	int		a;
	int		b;
	bool	res;

	res = false;
	a = 42;
	b = 21;
	swap(&a, &b);
	res |= a != 21;
	res |= b != 42;
	swap(&a, &b);
	res |= a != 42;
	res |= b != 21;
	a = 0;
	b = 0;
	swap(&a, &b);
	res |= a != 0;
	res |= b != 0;
	a = 42;
	b = 42;
	swap(&a, &b);
	res |= a != 42;
	res |= b != 42;
	return (res);
}
