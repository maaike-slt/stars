/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sum.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 19:18:04 by msloot            #+#    #+#             */
/*   Updated: 2023/03/23 19:06:04 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	sum(unsigned int tree)
{
	unsigned int	apple;
	unsigned int	count;

	apple = 0;
	count = 0;
	while (count < tree)
	{
		++count;
		apple += count;
	}
	return (apple);
}
