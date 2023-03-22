/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 10:13:19 by adelille          #+#    #+#             */
/*   Updated: 2023/03/22 10:54:36 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	special_sum(unsigned int n);

int	main(void)
{
	return (!(
			special_sum(0) == 0
			&& special_sum(4) == 10
			&& special_sum(5) == 9
			&& special_sum(6) == 21
			&& special_sum(7) == 16
		));
}
