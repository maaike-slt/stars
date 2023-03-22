/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sum.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 19:18:04 by msloot            #+#    #+#             */
/*   Updated: 2023/03/22 19:32:33 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	sum(unsigned int tree)
{
	unsigned int	apple;

	apple = 0;
	while (apple <= tree)
	{
		printf("%d\n", apple);
		++apple;
	}
	printf("%d\n", apple);
	return (apple);
}
