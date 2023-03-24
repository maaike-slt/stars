/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   special_sum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 17:06:43 by msloot            #+#    #+#             */
/*   Updated: 2023/03/24 17:20:48 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	special_sum(unsigned int tree)
{
	unsigned int	apple;
	unsigned int	count;

	apple = 0;
	count = 0;
	if (tree % 2 == 0)
	{
		while (count < tree)
		{
			++count;
			apple += count;
		}
		return (apple);
	}
	else
	{
		while (count < tree)
		{
			++count;
			if (count % 2 != 0)
				apple += count;
		}
	}
	return (apple);
}
